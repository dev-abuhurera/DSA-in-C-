#include <iostream>
#include <vector>

using namespace std;
// Task no 2


struct Node
{
    int data;
    Node* next;

    Node(int val){ // constructor that will assign the value directly when we create the object of the class
        data = val;
        next = nullptr;
    }
};

class singleLinkedList{

        public:

        Node* head; // head pointer to point to the first node of the linked list

        singleLinkedList(){ // constructor to initialize the head pointer to null
            head = nullptr;
        }

        // Now we have to create a method so that we insert nodes in the list 

        void insertList(int val){

            Node* newNode = new Node(val); // Create the first node with the value and next is pointing to the null

            if(head == nullptr) // it means that no pointer to the list thus list is empty
            {
                head = newNode; // head will point to the first node
                return;
            }


            // if the list is not empty then we have to traverse to the end of the list and then insert the new node

            Node* temp = head; // temporary pointer to traverse the list 

            // stored the address of the head node and now the next nodes will be added
            
            while (temp -> next != nullptr){ // traverse to the end of the list
            
                temp = temp -> next; // move to the next node
            }

            temp -> next = newNode; // insert the new node at the end of the list
            
        }
        // Method to display the linked list

        void displayList(Node *node){

            Node* temp = head; // temporary pointer to traverse the list

            while (temp != nullptr){ // traverse until the end of the list

                cout << temp -> data << "->"; // print the data of the node
                temp = temp -> next; // move to the next node
            }
            cout << "Null" << endl; // indicate the end of the list

        }

        void splitList(){
            
            Node* first = head; // First pointer to traverse the list one by one 
            
            Node* second; // Second pointer to traverse the list

            if(head == nullptr){ // if the list is empty
                cout << "List is empty" << endl;
                return;
            }

            // count the total number of nodes in the list

            int count = 0;

            Node* temp = head;

            while (temp != nullptr){ // traverse until the end of the list

                count++;

                temp = temp->next;

            }

            // Now slow pointer is at the middle of the list

           for(int i = 0; i < (count - 1) / 2; i++){ // move the second pointer to the middle of the list ---> count is one less than the number of nodes

                first = first -> next; // move to the next node
                
           }

            second = first -> next; // second pointer will point to the next node of the slow pointer
            first -> next = nullptr; // break the list into two halves

            // Now first pointer is at the end of the first half of the list
            // second pointer is at the start of the second half of the list

            sortedList(head); // sort the first half of the list 
            sortedList(second); // sort the second half of the list



            // Display the first half of the list

            cout << "First half of the list: " << endl;
            
            Node* current = head; // temporary pointer to traverse the first half of the list
            while (current != nullptr){ // traverse until the end of the first half of the list

                cout << current -> data << "->"; // print the data of the node
                current = current -> next; // move to the next node

            }
            cout << "Null" << endl;


            


            // Display the second half of the list

            cout << "Second half of the list: " << endl;

            Node* tempNode = second; // temporary pointer to traverse the second half of the list

            while (tempNode != nullptr){ // traverse until the end of the second half of the list

                cout << tempNode -> data << "->"; // print the data of the node
                tempNode = tempNode -> next; // move to the next node

            }

            cout << "Null" << endl;
        }
        // Method to sort the linked list in descending order

        void sortedList(Node* node){

            if(node == nullptr){
                cout << "List is empty" << endl;
                return;
            }

            Node* currentNode = node;
            Node* currentNext;

            while (currentNode -> next != nullptr){
                
                currentNext = currentNode -> next;

                if(currentNode -> data < currentNext -> data){
                    int tempVal = currentNode -> data;
                    currentNode -> data = currentNext -> data;
                    currentNext -> data = tempVal;
                }

                currentNode = currentNode -> next;
            }
        
        }
};


int main(){

    singleLinkedList list;
    // Using the class to implement a simple linked list

    vector<int> values = {47, 33, 12, 89, 21, 50};

    for (int i = 0; i < values.size(); i++){
        list.insertList(values[i]);
    }

    
    list.splitList();
    
    
    return 0;
}

