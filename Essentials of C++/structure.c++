// Structure is a container that compiles the different datatypes

#include <iostream>
using namespace std;

struct Rectangle
{
    int length; // Take 4bytes
    char width; // Take 4bytes
};




int main(){
// declaring the variable rectangle of the datatype Rectangle 
Rectangle rectangle;
// -------------------------------------------------------------------

//Initialization

rectangle.length = 10;
rectangle.width = 20;

cout<<rectangle.length<<endl;

//Another way ------------------------

Rectangle rect = {10, 5};
cout<<rect.length<<endl;


//--------------------------------

int Area = rect.length * rect.width;
cout<<"The Area of the rectangle: "<<Area<<endl;

//-------------------------------------------------------------------------

cout<<sizeof(Rectangle)<<endl;
// Padding concept that the compiler try to add the padding to align the data according to the highest datatype so that the cpu can process fastly

return 0;

}




