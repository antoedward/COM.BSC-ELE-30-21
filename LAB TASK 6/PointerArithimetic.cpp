#include <iostream>

using namespace std;

int main () 
{

  //null pointer
   int* pPointer = nullptr;

  int numbersArray[3] = {10, 20, 30};

   pPointer = numbersArray;

    cout << "Address at pPointer: " << pPointer << endl;
   cout << "Address of numbersArray[0] " << numbersArray << endl;

  cout << "value at pPointer: " << *pPointer << endl;

  cout << "value at ++pPointer: " << *(++pPointer) << endl;

   pPointer = numbersArray;

  cout << "value at pPointer++ " << *(pPointer++) << endl;

      return 0;
}