#include <iostream>

using namespace std;
int main(){
    int element;
    
    int count = 1;
    while ( count !=0){
        cout<< "Enter a element between 5 and 10 :"<<endl;
        cin>> element;

        if (element >= 5 && element <= 10){
            cout<<"your element "<<element<<" has been accepted"<< endl;
            return 0;
            } else if (element != sizeof(int )){
            cout <<"sorry you entered invalid element try again"<< endl;
            } else {
            count++;
        }
       
    }

}