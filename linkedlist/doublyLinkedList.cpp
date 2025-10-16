#include <iostream>
using namespace std;


struct doublyNode // Structure of a doubly linked list node 

{
    int data;
    doublyNode* next;
    doublyNode* prev;

    doublyNode(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class doublyLinkedList
{
    public:

    doublyNode* head;

    doublyLinkedList(){
        head = nullptr;
    }


    void insertion(int val){

        doublyNode* newNode = new doublyNode(val);

        if(head == nullptr){
            head = newNode;
            return;
        }

        doublyNode* temp = head;

        while (temp -> next != nullptr)
        {
            temp = temp -> next;
        }

        temp -> next = newNode;
        newNode -> prev = temp;

        // temp -> previous already is assigninig to the nullptr 
        // newNode -> next is also at nullptr
        
    }

    void traverse(){

        doublyNode* temp = head;

        while(temp -> next != nullptr){
            cout<< temp -> data << "<->";
            temp = temp -> next;
        }

        cout<<"Null"<<endl;


    }

    // insertion at a specific postion

    void insertSpecification(int val, int pos, doublyNode* head){

        doublyNode* addNode = new doublyNode(val);

        if(head == nullptr){
            head = addNode; // First node is created
            return;
        }
        
        doublyNode* temp = head;

        for(int i = 0; i < pos - 1 && temp -> next != nullptr; i++){
            temp = temp -> next;
        }

        addNode -> next = temp -> next; // 
        temp -> next = addNode;
        addNode -> prev = temp;


    }

};

int main(){
    doublyLinkedList list;

    for(int i = 0; i < 5; i++){
        list.insertion(i * 10);
    }

    list.traverse();

    ;


    return 0;
}