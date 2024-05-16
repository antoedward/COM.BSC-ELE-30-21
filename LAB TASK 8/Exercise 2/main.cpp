#include "Person.h"

int main() {
    Person Jane("Jane", 75.0f);
    Person John("John", 70.0f);
    
    float totalWeight = Jane + John;
    cout << "Total Weight: " << totalWeight << " kg" << endl;

    if (Jane == John) { 
        cout << "Jane and John have the same name." << endl;
    } else {
        cout << "Jane and John have different names." << endl;
    }

    if (Jane > John) {
        cout << "Jane weighs more than John." << endl;
    } else {
        cout << "John weighs more than or equal to Jane." << endl;
    }

    return 0;
}