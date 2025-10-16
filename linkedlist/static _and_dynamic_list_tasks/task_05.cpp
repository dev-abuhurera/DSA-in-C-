#include <iostream>
using namespace std;

struct Node
{
    int Tabid;
    string websiteTitle;
    string URL;
    Node* next;
    Node* prev;

    Node(int id, string title, string url){
        Tabid = id;
        websiteTitle = title;
        URL = url;
        next = nullptr;
        prev = nullptr;
    }

};


class doublyLinkedList{
    public:

    Node* head;
    
    doublyLinkedList(){

        head = nullptr;

    }

    void openTab(int id, string title, string url){
        Node* newNode = new Node(id, title, url);

        if(head == nullptr){
            head = newNode;
            return;
        }

        Node * temp = head;

        while(temp -> next != nullptr){
            temp = temp -> next;
        }

        temp -> next = newNode;
        newNode -> prev = temp;

    }

    void closeTab(int tabid){

        if( head == nullptr ){
            cout << "No tabs are open" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr)
        {
            if(temp -> Tabid == tabid){
                
                temp -> prev -> next = temp -> next; // bypass the current node (previous node next will point to current node next)
                temp -> next -> prev = temp -> prev; // bypass the current node (next node prev will point to current node prev)
                delete temp; // delete the current node
                cout << "Tab with id " << tabid << " is closed" << endl;
                return;

            }

            temp = temp -> next;
        }
    }

    void switchTab (int tabid){

        if(head == nullptr){
            cout << "No tabs are open" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr){
            
            if(temp -> Tabid == tabid){ // It means that we have reched to the tab to the specific tabid
                cout << "Switched to the tab with id: " << tabid << endl;
                cout << "Website Title:" << temp -> websiteTitle << endl;
                cout << "URL: " << temp -> URL << endl;
                return;
            }
            temp = temp -> next;
        }
        
    }

    void displayTabsForward(){

        if(head == nullptr){
            cout << "No tabs are open" << endl;
            return;
        }

        Node* temp = head;

        while (temp != nullptr){
            cout << "Tab ID: " << temp -> Tabid << ", Title: " << temp -> websiteTitle << ", URL: " << temp -> URL << endl;
            temp = temp -> next;
        }
    }

    void displayTabsBackward(){

        if(head == nullptr){
            cout << "No tabs are open" << endl;
            return;
        }

        Node* temp = head;

        while (temp -> next != nullptr){ // traverse to the end of the list and then we will print backwards
            temp = temp -> next;
        }

        // Now temp is at the last node

        while (temp != nullptr){ // traverse backwards
            cout << "Tab ID: " << temp -> Tabid << ", Title: " << temp -> websiteTitle << ", URL: " << temp -> URL << endl;
            temp = temp -> prev;
        }
        
    }

};


    int main(){

        doublyLinkedList browser;

        browser.openTab(1, "Google", "www.google.com");
        browser.openTab(2, "YouTube", "www.youtube.com");
        browser.openTab(3, "Facebook", "www.facebook.com");

        cout << "Displaying tabs from first to last:" << endl;
        browser.displayTabsForward();

        cout << endl;

        cout << "Displaying tabs from last to first:" << endl;
        browser.displayTabsBackward();

        cout << endl;

        browser.switchTab(2);

        cout << endl;

        browser.closeTab(2);

        cout << endl;

        browser.displayTabsForward();
        

        return 0;
    }

