#include <iostream>
//#include <cmath>

using namespace std;

double TriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double RectangleArea(double length, double width) {
    return length * width;
}

double SquareArea(double side) {
    return side * side;
}

int main() {
    while (true) {
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is " << TriangleArea(base, height) << endl;
                break;

            case 2:
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The area of the rectangle is " << RectangleArea(length, width) << endl;
                break;

            case 3:
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "The area of the square is " << SquareArea(side) << endl;
                break;

            case 4:
                cout << "Exiting the program: " << endl;
                return 0;
            default:
                cout << "Invalid input. Please enter a valid choice." << endl;
        }
    }

    return 0;
}