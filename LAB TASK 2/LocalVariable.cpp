#include<iostream>



at are declared inside a function or block are local variables. They can be used 
only by statements that are inside that function or block of code. Local variables are not 
known to functions outside their own. 
 Implement the following in a new project, within a file titled LocalVariables.cpp and 
execute your program. 
#include <iostream>
using namespace std;
int main() {
 cout << "Size of char : " << sizeof(char) << endl;
 cout << "Size of int : " << sizeof(int) << endl;
 cout << "Size of short int : " << sizeof(short int) << endl;
 cout << "Size of long int : " << sizeof(long int) << endl;
 cout << "Size of float : " << sizeof(float) << endl;
 cout << "Size of double : " << sizeof(double) << endl;
 cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
 
 return 0;
}
#include <iostream>
using namespace std;
 
int main () {
 // Local variable declaration:
 int a, b;
 int c;
 
 // actual initialization
 a = 10;
 b = 20;
 c = a + b;
 
 cout << c;
 
 return 0;
}