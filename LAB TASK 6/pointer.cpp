#include <iostream>

using namespace std;

int main (){
    // declare pointer and intialize it
    //so that it doesn't store a random address 

    int* pPointer = nullptr;

    int integerVar = 5;
    // assign pointer to address of object
    pPointer = &integerVar;

    // output the value of integerVar
    cout << "integerVar: " << integerVar << endl;
    
    // output the aggress of integer
    cout << "Address of integerVar: " << &integerVar << endl;

    // output the address of assigned to pointer
    cout << "pPointer:" << pPointer + 1 << endl;

    // output the address of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;


    return 0;



    
}