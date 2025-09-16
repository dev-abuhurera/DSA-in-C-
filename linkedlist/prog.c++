#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int *p = &x;
    if(p != NULL){
        cout << p << endl;
        cout << *p << endl;
    }
    else{
        cout << "Pointer is NULL" << endl;
    }


    int *dynamicPtr = new int(42); // This is the correct way to dynamically allocate an integer and the address is stored in the pointer 
    // like creation and storing the address in a pointer variable done at the same time

    cout << "Dynamically allocated integer: " << dynamicPtr << endl;
    cout << "Dynamically allocated integer: " << *dynamicPtr << endl;

    struct Node
    {
        int data;
        Node* nextAdd;
    };
    // --------------------------------------------------------------
    Node *first; // So this node is now created at a memory address in the heap
    first = new Node();
    
    //---------------------------------------------------------------
    Node *first = new Node();
    first -> data = 23;
    first -> Node = nullptr;
    //----------------------------------------------------------------
    Node *first = new Node(43, nullptr);
    //---------------------------------------------------------------

    Node *Second;
    Second = new Node();

    Second -> data = 40;
    Second -> Node = first; // assigned the address to the first node 

    // -----------------------------------------------------------------
    //Node traversing--------------------->>>>>>>

    Node *temp = Second; // temp is now pointing to the second node(current)
    // temp is storing the address of the second node

    while(temp != nullptr){
        cout<<temp -> data << endl;
        temp = temp -> nextAdd; // moving the temp to the next node(as the address is of the next node)
    }

    // ---------------------------------------------------------------
    






    cout << first << endl;
    return 0;
}