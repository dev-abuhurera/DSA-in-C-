#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};


class stack{

    Node* top;

    public:

    stack(){
        top = nullptr;
    }

    void stackCreation(int val){

        Node* newNode = new Node(val); // creating a new node

        if(top == nullptr) // if top is null it means the stack is empty
        {
            top = newNode; // if stack is empty, make the new node the top node
            return;
        }
        
        newNode -> next = top; // linking the new node to the previous node
        top = newNode; // updating the top pointer to point to the new node

        // This is how we can create a stack using linked list ---> we keep updating the top pointer and in will keep pointing the newNode.

    }

    void stackRemoval(){

        // removal only occurs from the top
        
        if(top == nullptr){
            cout<< "Stack is empty"<< endl;
            return;
        }

        Node* temp;

        int value = top -> data; // The data of the top node is in the temp

        temp = top; // now the top node address is stored
        top = top -> next;// top pointer is updated 

        delete temp; // deleted the top node

        cout<< "Popped the " << value << "From the stack" << endl;

    }


    void displayStack(){

        if(top != nullptr)
        {
            cout << "stack is not empty" << endl;
        }

        Node* temp = top;

        while (temp -> next != nullptr)
        {
            cout<<temp -> data<<"->";
            temp = temp -> next;
        }

        cout<<"Null"<<endl;
        
        
    }


};


int main(){

    stack newStack;

    for(int i = 0; i < 6; i++){

        newStack.stackCreation(i * 10);

    }

    newStack.displayStack();
    newStack.stackRemoval();
    newStack.displayStack();


    return 0;
}