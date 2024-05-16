#include "Person.h"

int main() {
    Person Jane("Jane", 60.0f);
    Person John("John", 75.0f);
    
    float totalWeight = Jane + John;
    
    cout << "Total Weight: " << totalWeight << " kg" << endl;

    return 0;
}