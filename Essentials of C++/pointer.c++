
#include <iostream>
using namespace std;

int main(){

    struct Rectangle
    {
        int data;
    };
    

    //pointer is a way of accessing the heap, the resources outside our prog and even the parameter passing

    int number = 100000;
    // This is the code session of the memory (Stack)

    int* p; // This is the pointer declaration -----> // Thus as it is local variable it is in stack

    p = &number; // pointer has the address of the number variable in the stack

    //---------------------------------------------------------------------------------------
    // This is the address and the value--------->>> 
    // ---------------------------------------Dereferencing-------------------------------------
    cout<<"The value of the number that is stored is: "<<*p<< endl; // This is the dereferencing
    cout<<"The address of the number: "<<p<< endl;
    //---------------------------------------------------------------------------------------

    // This is when the pointer is assigned to the heap

    
    int* array = new int[10]; 

    // Every time the new keyword create an object in heap it returns a pointer
    

    for(int i = 0; i < 10; i++){
        array[i] = i;
    }

    for(int i = 0; i < 10; i++ ){
        cout<<array[i]<<" ";
    }

    cout<<endl;
    
    delete array;

    //This is a very important point that new int[size] or anything created with the new --> returns a pointer

    //------------------------------------------------------------------------
   
    int Arr[5]; // This creates an array without pointer in the stack memory 
    int* arr = new int[5]; // This creates an array with pointer in the heap memory

    // -------------------------------------------------------------------------   
    

    int* p1;
    char* p2;
    double* p3;
    float* p4;
    bool* p5;
    Rectangle*p6;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    cout<<sizeof(p6)<<endl;

    return 0;
}

