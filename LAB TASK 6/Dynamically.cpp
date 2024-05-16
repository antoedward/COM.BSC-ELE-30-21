#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int * dynamic Int = new int;
    string dynamic;
    
    string * dynamic string = new string;
    cout << "enter an integer value";
    cin >> *dynamic Int;

    cout << "enter a string value";
    cin >> dynamic string;
    //cin.ignore();

    cout << "Dynamically allocated integer value" << *dynamic Int << endl;
    cout << "Dynamically allocated string value" << *dynamic string << endl;


    return 0;
}