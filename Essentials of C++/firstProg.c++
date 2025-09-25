#include<iostream>
using namespace std;
// Arrays
int main(){
    //    int age = 25;
    //    cout << sizeof(age) << endl; // size in bytes
        
    // char = 1byte
    char grade = 'A';
    // int = 4bytes
    int value = grade; // implicit type conversion
    cout << value << endl;

    // we got the ascii value of A which is 65

    // --------------------------------------------------

    double score = 95.5;
    // double = 8bytes

    int convertedScore = (int)score; // implicit type conversion
    cout << convertedScore << endl;

    // ---------------------------------------------------

    string name = "John";
    // Exlicit casting of the strign to int
    // int newName = (int)name; // we cannot convert string to int
    // how ot fix it?

    int newname = int(name[0]); // convert the first character of the string to int
    // cout << newName << endl; This will give error
    cout << newname << endl; // This will give the ascii value of J which is 74

    //......................................

    // Input in C++

    int age;
    cout << "Enter your age: ";
    cin >> age; // taking input from user

    cout << "Your age is: " << age << endl;

    // This is the basic program to show how we take the input in C++

    // ------------------------------------------------
    // >> this is called extraction operator
    // << this is called insertion operator
    // ------------------------------------------------

    // cout << "Hello World" << endl; // This will insert the data to the output stream
    // cin >> age; // This will extract the data from the input stream

    // ------------------------------------------------

    // Garbage value

    int value1; // declaration
    cout << value1 << endl; // This will give garbage value as we have not initialized the variable

    // if we declare a variable without initializing it, it will contain garbage value

    // --------------------------------------------------

    // Operators in C++

    //------------------------------------------------

    
    int sum = 0,  a, b;

    cout << "Enter the two numbers: ";
    
    cin >> a >> b; // taking input of two numbers

    cout << "Sum is :" << sum  << " " << "Before we store it" << endl;

    sum = a + b;

    cout << "Sum is :" << sum  << " " << "After we store it" << endl;

    // --------------------------------------------------
    //uranary operators

    // ++ --

    int x = 6;

    // cout << ++x << endl; // pre-increment
    // cout << x++ << endl; // post-increment

    x = x++ - x++;
    cout << x << endl;
    x = ++x;
    cout << x << endl;

    int y = 10;

    y = y--;
    cout << y << endl;
    
    // --------------------------------------------------


    return 0;
}


