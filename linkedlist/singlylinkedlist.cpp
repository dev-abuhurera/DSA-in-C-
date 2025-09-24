#include <iostream>
using namespace std;

 struct Node
    {
        int data;
        Node* next;

        Node(int val, Node* n){
            data = val;
            next = n;
        }
    };
    

// int main(){
   
//     Node *start = new Node();
//     start -> data = 10;
    

//     Node *second = new Node();
//     second -> data = 20;
//     second -> next = nullptr;

//     start -> next = second; // assigned the address to the second node

//     Node *temp = start;

//     if(temp != nullptr){
            
//         cout<<"Linked List exists"<<  endl;
            
//         while(temp -> data != 20){
//         cout<<temp -> data << endl;
//         temp = temp -> next; // moving the temp to the next node(as the address is of the next node)
//         }
//         cout << temp -> data << endl;
//     }
//     else{
//         cout<<"Pointer is NULL"<<endl;
//     }

//     // Lets insert a new node at the end of the linked list

//     Node *third = new Node();
//     // third -> data = 30;
//     // third -> next = nullptr;

//     // second -> next = third; // assigned the address to the third node

//     temp = start;

//      if(temp != nullptr){
            
//         cout<<"Linked List exists"<<  endl;
        
//         while (temp -> next != nullptr){
//             temp = temp -> next; // moving the temp to the next node(as the address is of the next node)
//         }
//         temp -> next = third; // assigned the address to the third node
//         cout << "The third node is added at the end of the linked list" << endl;
//     }
//     else{
//         cout<<"Pointer is NULL"<<endl;
//     }

//     // Inserting the data in the start of the linked list 


//     Node *newNode;
//     newNode = new Node();

//     temp = start;

//     if(temp != nullptr){

//         cout << "Linked List exists" << endl;

//         while (temp -> next != nullptr){
//             if(temp -> next == second){
//                 cout << "It is the first node" << endl;
//                 newNode -> next = temp; // newNode is now pointing to the first node
//                 cout << "New node is now added at the start of the linked list" << endl;
//                 newNode -> data = 5;
//                 break;
//             }
//             else{
//                 temp = temp -> next; // moving the temp to the next node(as the address is of the next node)
//             }
//         }
//     }
//     else{
//         cout<<"Pointer is NULL"<<endl;
//     }

//     // Now adding the node to the specific position in the linked list

//     Node *anotherNode = new Node();
//     Node * prevNode = new Node();

//     temp = start;


//     if(temp != nullptr){
//         cout << "Linked List exists" << endl;

//         while (temp -> data != 20){
//             prevNode = temp;
//             temp = temp -> next; // moving the temp to the next node(as the address is of the next node)
//         }

//         cout << "The node with data 20 is found" << endl;
//         anotherNode -> next =  prevNode;
//         cout << "Another node is now added before the node with data 20" << endl;
//     }
//     else{
//         cout<<"Pointer is NULL"<<endl;
//     }

    
//     // Asking the user to enter the data for the nodes 

//     cout << "Enter the data for the node you want to delete: " << endl;
    
//     int value;

//     cin >> value;

//     cout << "The value is now taken " << endl;

//     temp = start;

//     if(temp != nullptr){
//         cout << "Linked list exists" << endl;


//     }
//     return 0;
// }
    

// This is the method of creation of a new node and that is returning the address of that node

// These are all global pointers ----------------------------->>>>>>>>>


// It is the linkedList easiest question ------------------------------------------------------------------------------------------------



Node* first;Node* second;Node* third;Node* forth;Node* fifth;Node* six; Node* previous;

Node* nodeCreation(int data, Node* next){
    Node* start = new Node(data, next);
    return start;
}

int linkedListCreation(){

    first -> next = second;
    second -> next = third;
    third -> next = forth;
    forth -> next = fifth;
    fifth -> next = six;
    six -> next = nullptr;

    return 0;
}

int linkedListTraversal(Node* start){

    Node* temp = start;
    int count = 0;

    if(temp != nullptr){
        cout<<"LinkedList exists"<<endl;

        while (temp != nullptr)
        {
          count++;
          temp = temp -> next;  
        }
        cout<<"The nodes that are present in the linked list are : "<< count <<endl;

        temp = start;// reseting the temp because at this point it is pointing to the null value which is not right<-----
        
        for(int i = 1; i < count/2; i++)
        {
            temp = temp -> next;
        }
        previous = temp -> next;
        temp -> next = nullptr;
    }
    cout<< "Linked list is now splitted to two halves"<<endl;
}


int sortedList(Node* one){
    Node* temp = one;
    Node* currTemp;
    int tempVar = 0;

    if(temp != nullptr){
        cout<<"LinkedList exists!!!"<<endl;

        while(temp -> next != nullptr){
            currTemp = temp;
            temp = temp -> next;

            if(currTemp -> data > temp -> data){
                tempVar = currTemp -> data;
                currTemp -> data = temp -> data;
                temp -> data = tempVar;
            }
        
        }
    }

    cout<<"The whole list is now sorted"<<endl;

}

int displayLinkedList(Node* startNode){

    Node* temp = startNode;

    if(temp != nullptr){

        cout<<"Linked List exists!!!!"<<endl;

        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }   

        cout << endl;
    }

    else{
        cout<<"List don't exist"<<endl;
    }
}


int main(){

    first =  nodeCreation(89, nullptr);
    second = nodeCreation(37, nullptr);
    third =  nodeCreation(455, nullptr);
    forth =  nodeCreation(900, nullptr);
    fifth =  nodeCreation(60, nullptr);
    six   =  nodeCreation(1, nullptr);
    
    linkedListCreation();
    linkedListTraversal(first);
    sortedList(first);
    sortedList(previous);
    displayLinkedList(first);
    displayLinkedList(previous);



   return 0;
}
    
//-------------------------------------------------------------------------------------------------------------------------






