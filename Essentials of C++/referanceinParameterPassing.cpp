#include <iostream>
using namespace std;

int main(){
    // A variable in heap
    int number = 5;

    cout<< &number <<endl; // Address of this variable in the stack

    int &anotherNum = number; // Address of number is now allocated 

    cout<< &number <<endl;
    cout<< &anotherNum <<endl;


    //This is the referance and it is helpfull in the parameter passing 

    return 0;
}