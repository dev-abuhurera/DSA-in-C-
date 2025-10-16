// stack is LIFO

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *top;
};

// This is the structure of a node 

int main(){

    Node* top = new Node();// It is the first node creation

    top -> data = 10;

    cout<< top->data << endl; // Accessing the data of the top node

    // now the first node is created where the top pointer is pointing to the first node

    Node *newNode = new Node(); // creating a new node

    newNode -> data = 20;

    newNode -> top = top; // linking the new node to the previous node

    top = newNode; // updating the top pointer to point to the new node


    // Now what actually happens is that now we created a newNode and give it the adress of the previous node 
    // And then the top pointer that was pointing the first node in now pointing to the new node so it means the new node is now the first node ---> top node 
    cout << top -> data << endl; // Accessing the data of the top node
    cout << top -> top -> data << endl; // Accessing the data of the previous node using the top pointer

    delete top -> top; // deleting the previous node
    delete top; // deleting the top node

    cout<< "Memory is free" << endl;

    return 0;

}