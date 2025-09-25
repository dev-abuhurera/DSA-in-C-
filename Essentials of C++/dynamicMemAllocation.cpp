#include <iostream>
using namespace std;

int main(){
    cout<<"Dynamically vs Statically created Arrays"<<endl;

    int size = 0;
    cout<<"Enter the array size you want to create"<<endl;
    cin >> size;

    cout<<"Static Array"<<endl;
    int array[size]; // Now it will be created in the stack but it's size is not till known so not the c++ standard

    for(int i = 0; i < size; i++){
        array[i] = i;
    }

    cout<<array<<" "<<endl;



    cout<<"Dynamically Created Array"<<endl;
    int* arr = new int[size]; // This is the array created in the heap

    for(int i = 0; i < size; i++){
        cout<<arr[size]<<" ";
    }

    // Releasing the memory
    delete[] arr;
}