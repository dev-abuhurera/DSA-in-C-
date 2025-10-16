#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Vectors - dynamic arrays no worry for size
      
    vector<int> v; // This is how we declare an empty vector in C++ STL
   
    v.push_back(1); // This is how we add elements to the vector
    v.push_back(2);
    cout<<"the value of v: "<< v[0] <<endl;

    // accessing the elements of the vector

    cout<<v.at(0)<<endl; // This is another way of accessing the elements of the vector

    // looping to the vector size


    vector<int> a(5,1); // This is how we declare a vector of size 5 with all elements initialized to 1

    for(int i = 0; i < a.size(); i++){
        cout<< a[i] << " ";
    }

    cout<<endl;

    // capacity of the vector
    cout<<a.capacity()<<endl; // This is how we check the capacity of the vector


    // different ways of declaring a vector

    vector<int> v1; // empty vector
    vector<int> v2(5); // vector of size 5 with default values (0 for int)
    vector<int> v3(5, 10); // vector of size 5 with all values initialized to 10
    vector<int> v4{1, 2, 3, 4, 5}; // vector initialized with a list of values
    vector<int> v5 = {1, 2, 3, 4, 5}; // another way to initialize a vector with a list of values
    
    // using the pointer declaration

    // vector<int>* p = new vector<int>; // dynamically allocated vector

    // This is the pointer having the address of the vector in the heap memory

    // p -> at(0) = 100;

    // cout<< (*p)[0] <<endl; // dereferencing the pointer to access the vector element

    // cout<< p << endl; // address of the vector in heap memory
    // cout<< &p << endl; // address of the pointer in stack memory

    // // cout<< *p << endl; // dereferenced pointer to get the vector object
    // //(it is an error to print the whole vector object directly)

    // cout<< (*p)[0] << endl; // dereferencing the pointer to access the first element of the vector

    // dynamic size allcation

    int size;

    cout<<"Enter the size of the vector: " <<endl;
    
    cin>>size;

    vector<int>* p1 = new vector<int>(size);

    cout<<"Enter the elements of the vector: "<<endl;

    for(int i = 0; i < size; i++){
        cin>> (*p1)[i]; // taking input for the vector elements

    }

    for(int i = 0; i < size; i++){
        cout<< (*p1)[i] << " "; // printing the vector elements
    }

    

    cout<<endl;

    cout << (*p1)[0] << endl;

    //---------------------------------------------------------------------------------------------------

    // This is the p1 = pointer
    // this is the *p1 = dereferencing the pointer to get the vector object
    // But vector cannot be printed directly
    // so we need to access the elements of the vector using the dereferenced pointer
    // *p1[i] = accessing the elements of the vector using the dereferenced pointer
    // p1[i] = accessing the elements of the vector using the pointer (this is wrong)
    // p1 -> at(i) = accessing the elements of the vector using the pointer (this is correct)
    // (*p1)[i] = accessing the elements of the vector using the dereferenced pointer (this is correct)
    // (*p1).push_back(10); // This is how we add elements to the vector using the dereferenced pointer
    // p1 -> push_back(10); // This is how we add elements to the vector using the pointer
    // derefeance is actually the value at the address stored in the pointer 
    // and direct access is the address stored in the pointer
    // (*p1).capacity(); This is the dereferenced pointer accessing the capacity function of the vector
    // p1->capacity(); This is the pointer accessing the capacity function of the vector
    // (*p1).at(0) =100 ; // This is the dereferenced pointer accessing the at function of the vector
    // p1->at(0) = 100; // This is the pointer accessing
    // This is the vector working its allocation and all

    //---------------------------------------------------------------------------------------------------


    delete p1; // free the dynamically allocated memory
    
    return 0;
}