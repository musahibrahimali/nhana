#include <iostream>
#include "rectangle.h"

using namespace std;

int main(){   
  
    // create an instance of the rectangles as an array and prepopulate it dynamically later
    Rectangle rectangles[5]; // create dynamic arrays
    // note that you can do the above five times and form an array from it; its also allowed, i don't know quite the
    // specifications
    //
    // create all 5 dynamic arrays, you can do it manually with individual values or ask user to fill in values
    // from the command line using cin >> 'some_variable'
    // 

    for (int i = 0; i < 5; i++){ // start from 0 to 5 and stops when it get to six becuase 6 is not less than 5
        /*
        * ask for user values to create the needed array of objects
        */
        // pointer variables for rectangle
        float *lenght = new float; // constant float value for the length
        float *width = new float; // constant float value for the breath
        cout << "Input the lenght and width of rectangle number " << i+1 << endl; // meter out instructions
        cout << "Lenght : "; // instruction to input lenght
        cin >> *lenght; // take the lenght from user
        cout << "widht : "; // instrunction for width
        cin >> *width; // take in width from the user
        rectangles[i].setLength(lenght); // populate each length with its value in the array of objects
        rectangles[i].setBreadth(width); // populate each breadth with its value in the array of objects
    }

    // print out some values of the populated rectangles
    cout << endl;
    cout <<"area of the 4th rectangle >> " << rectangles[4].GetArea() << endl;
    cout <<"perimeter of the 4th rectangle >> " << rectangles[4].GetPerimeter() << endl;

    /* This is the standalone instance of the rectangle class */
    // create an instance of a rectangle

    // uncomment the code below to see it in action (the single instantiation of the class)

    /*Rectangle rec1 = Rectangle(len, breadth); // create an instance of the Rectangle
    cout <<"Area = " << rec1.GetArea() << " units" << endl;
    cout <<"Perimeter = " << rec1.GetPerimeter() << " units" << endl;*/

    // default return value
    return 0;
}