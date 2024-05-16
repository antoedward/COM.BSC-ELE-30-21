#include <iostream>
#include <string>
using namespace std;

int main()
{
   //Declare and initialize array
    const string elements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    for (int n = 0; n < 8; ++n) {
    
        if (elements[n][0] == 'B') {
            // Output the element
            cout << elements[n] << endl;
        }
    }

    return 0;
}