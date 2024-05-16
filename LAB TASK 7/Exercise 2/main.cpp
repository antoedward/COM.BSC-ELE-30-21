#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    float length; 
    float width;
    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    cout << "Enter the width of the first rectangle: ";
    cin >> width;

    Rectangle rectangle1;
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    cout << "Area of the first rectangle: " << rectangle1.calculateArea() << endl;

    cout << "Enter the length of the second rectangle: ";
    cin >> length;
    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rectangle2(length, width); 

    cout << "Area of the second rectangle: " << rectangle2.calculateArea() <<endl;

    return 0;
}
