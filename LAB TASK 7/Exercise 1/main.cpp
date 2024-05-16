// main.cpp

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle myRectangle;

    // Get user input for length and width
    float userLength, userWidth;
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;
    cout << "Enter the width of the rectangle: ";
    cin >> userWidth;

    // Set the values using accessor methods
    myRectangle.setLength(userLength);
    myRectangle.setWidth(userWidth);

    // Calculate and display the area
    float area = myRectangle.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
