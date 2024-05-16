#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter the number of rows (not more than 3):";
    cin >> rows;
    while (rows <= 0 || rows > 3) {
        cout << "Incorrect input Please enter a number of rows between 1 and 3: ";
        cin >> rows;
    }

    cout << "Enter the number of columns (not more than 3): ";
    cin >> columns;
    while (columns <= 0 || columns > 3) {
        cout << "Incorrect input Please enter a number of columns between 1 and 3: ";
        cin >> columns;
    }

    int columns;
    double** array = new double*[rows];
    for (int n = 0; n < rows; ++n) {
        array[n] = new double[colunms];
    }

      cout << "Enter the values for each element of the array:\n";
    for (int n = 0; n < rows; ++n) {
        for (int k = 0; k < columns; ++k) {
            cout << "Enter value for element (" << n << ", " << k << "):";
            cin >> array[n][k];
        }
    }

    // Output the values of each element of the array
    cout << "Values of each element of the array:\n";
    for (int n = 0; n < rows; ++n) {
        for (int k = 0; k < columns; ++k) {
            cout << array[n][k] << " ";
        }
        cout << endl;
    }


    return 0;
}