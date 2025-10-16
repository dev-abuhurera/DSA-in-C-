#include <iostream>
#include <vector>

using namespace std;

// Task no 3


    struct Node
    {
        int stopId;
        string stopName;
        int distance;
        Node* next;

        Node(int Id, string Name, int nodeDistance){
            stopId = Id;
            stopName = Name;
            distance = nodeDistance;
            next = nullptr;
        }

    };

    class circularList{
        public:

        Node* head;

        circularList(){

            head = nullptr;

        }

        void addStopAtEnd(int Id, string Name, int nodeDistance){

            Node* newNode = new Node(Id, Name, nodeDistance); // Creating the new node of the list 

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

        void addStopAfter(int id, int newId, string Name, int nodeDistance){

            
            Node* newNode = new Node(newId, Name, nodeDistance);

            Node* temp = head;

            if(temp != nullptr){
                cout << "linked List exists" << endl;
                
                do{
                    temp = temp -> next;
                }
                while ( temp -> stopId != id);

                newNode -> next = temp -> next;
                temp -> next = newNode;

                
            }

        }

        void removeStop(int id){

            if(head -> stopId == id){
                delete head;
                head = nullptr;
                cout<<"Head node is deleted"<<endl;
            }


            Node* prev = head;
            Node* current = head -> next;

            while (current != head){

                if(current -> stopId == id){
                    prev -> next = current -> next;
                    delete current;
                    cout<<"Node with id "<< id <<" is deleted"<<endl;
                    return; // we stop the function after deleting the node
                }

                prev = current;
                current = current -> next;
            }

        }

        void findLongDistance(){

            // we have to find the node with the longest distance to the next node

            Node* current = head;
            Node* longestStop = head; // starting from the head
            int maxDistance = current -> distance; // starting from the head distance

            do{
                if(current -> distance > maxDistance){
                    maxDistance = current -> distance;
                    longestStop = current;
                }
                current = current -> next; // moving to the next node
            }while (current != head);

            cout<<"The stop with the longest distance is: " << longestStop -> stopName << " with distance: " << maxDistance << endl;
            

        }

        void displayList(){

            Node* temp = head;
            
            do{
                cout << temp->stopId << " -> ";
                temp = temp->next;
            }
            while(temp != head);

            cout << "(Back to head)" << endl;


        }

    };
    


    int main(){

        circularList list;

        cout << "Enter the following information for the circular linked list of bus stops: " << endl;

        for( int i = 0; i < 5; i++){
            int Id;
            string Name;
            int nodeDistance;

            cout << "Enter the stop ID: ";
            cin >> Id;

            cout << "Enter the stop Name: ";
            cin >> Name;

            cout << "Enter the distance: ";
            cin >> nodeDistance;

            list.addStopAtEnd(Id, Name, nodeDistance);
        }
        
        // -----------------------------------------------------------------------------------------
        int id;

        cout << "Enter the stop id to delete the node: " << endl;
        cin >> id;
        cout << endl;

        list.removeStop(id);

        // -----------------------------------------------------------------------------------------

        list.displayList();

        cout << endl;

        // -----------------------------------------------------------------------------------------

        list.findLongDistance();

        // -----------------------------------------------------------------------------------------


        return 0;
    }   