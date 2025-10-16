#include<iostream>
using namespace std;


struct singlyNode{ // Structure assigninig

    int data;
    singlyNode* next;

    singlyNode(int val){ // Constructor to create the node with default value and the nullptr
        data = val;
        next = nullptr;
    }
};


class singlyLinkedList{ // Created the class to bind the whole node creation logic together ------- (1)

    public:

    singlyNode* head; // --------------  (2) // head to have the first node address


    singlyLinkedList(){ // constructor to create keep the head pointing to nothing
        head = nullptr;
    }

    // insertion of the linked list nodes in the end

    void insertion(int val){

        singlyNode* newNode = new singlyNode(val); // node from the struct that will always have the value and the default value of none

        if(head == nullptr){ // First the first pointer is if null then we will add the new node there 
            head = newNode;
            return;
        }

        singlyNode* temp = head; // creating a temporary node with the address of the head

        while (temp -> next != nullptr) // now at this point the temp has the next pointing to the nullptr so the loop will stop there and the nextnode will be added 
        {
           temp =  temp -> next;
        }

        temp -> next = newNode; // added the next node where the loop stops 

    }

    void traverse(){

        cout<<"Traversing the nodes of the linked list"<<endl;

        singlyNode* temp = head;

        while (temp != nullptr)
        {
            cout<<temp -> data<< "->";
            temp = temp -> next;
        }

        cout<<"NULL"<<endl;
        
    }

};


int main(){

    singlyLinkedList singlyList; // Creates an empty object of that class

    for(int i = 1; i <= 5; i++){

        singlyList.insertion(i * 10); // it will be getting the new value in every iteration

    }

    singlyList.traverse();

    //---------------------------------------------------------------------------------------------------------
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

