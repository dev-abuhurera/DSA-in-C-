#include <iostream>
using namespace std;

 struct Node
    {
       string word;
       Node* next;

        Node(string w){
            word = w;
            next = nullptr;
        }

    };


    class circularList{
        public:

        Node* head;

        circularList(){

            head = nullptr;

        }

        void insert(string words){

            Node* newNode = new Node(words); // Creating the new node of the list 

            if(head == nullptr){ // no node exist in the list
                head = newNode;
                newNode -> next = head; // pointing the next of the newNode to head to make it circular
                return;
            }

            Node* temp = head;

            while (temp -> next != head)
            {
                temp = temp -> next; // traversing the list to add the newNodes
            }

            temp -> next = newNode; // This is when the temp reaches the last node and then the new node is inserted in the list
            newNode -> next = head; // Now the newNode next -> head node so the cirular node is created 

        }

        void undo(){

            if(head == nullptr){
                cout << "List is empty, nothing to undo" << endl;
                return;
            }

            Node* temp = head;

            if(temp -> next == head){ // it is the first head node only
                delete head;
                head = nullptr;
                cout << "The only node in the list is deleted, list is now empty" << endl;
                return;
            }

            Node* prev = head;
            Node* current = head -> next;

            while (current != head){
                if(current -> next == head){
                    prev -> next = head;
                    delete current;
                    cout << "The last node is deleted" << endl;
                    return;
                }

                prev = current;
                current = current -> next;
            }
            


        }


        void find_and_replace(string oldWord, string newWord){

            if(head == nullptr){
                cout << "List is empty, nothing to replace" << endl;
                return;
            }

            Node* temp = head;

            do{
                if(temp -> word == oldWord){
                    temp -> word = newWord;
                    cout << "The word " << oldWord << " is replaced with " << newWord << endl;
                    return;
                }
            }while (temp != head);
           

        }

        void count(){
            if(head == nullptr){
                cout << "List is empty, count is 0" << endl;
                return;
            }

            int count = 0;

            Node* temp = head;

            do{
                count++;
                temp = temp -> next;
            }while (temp != head);
            
        }

        void gotoNext(){
                if(head == nullptr){
                cout << "List is empty, nothing to go next" << endl;
                return;
                }

                Node* cursor = head;

                cursor = cursor -> next;
                cout << "The current node value is : " << cursor -> word << endl;
        }
       
    
        void displayList(){

            Node* temp = head;
            
            do{
                cout << temp->word << " -> ";
                temp = temp->next;
            }
            while(temp != head);

            cout << "(Back to head)" << endl;


        }

    };
    


    int main(){

        circularList list;

        cout << "Enter the  words to create a circular linked list: " << endl;

        string word;

        for (int i = 0; i < 5; i++)
        {
           cin >> word;
            
           list.insert(word);

        }
        // -----------------------------------------------------------------------------------------

        list.count();

        // -----------------------------------------------------------------------------------------

        string oldWord, newWord;

        cout << "Enter the old word to be replaced: " << endl;

        cin >> oldWord;

        cout << "Enter the new word: " << endl;

        cin >> newWord;


        list.find_and_replace(oldWord, newWord);

        // -----------------------------------------------------------------------------------------

        list.gotoNext();

        // -----------------------------------------------------------------------------------------

        
        

        list.displayList();

        return 0;
    }