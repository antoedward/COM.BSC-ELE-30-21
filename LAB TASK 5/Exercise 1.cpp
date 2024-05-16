#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
int daysUntillExpiration = rand() % 12;


    if (daysUntillExpiration <=0){
        cout << "your subscription has expired : " << endl;

    } else if(daysUntillExpiration <=1){
        cout << "your subscription has expires within a day" << endl;
        cout << "Renew now and save 20%! : " << endl;

    } else if (daysUntillExpiration <=5){
        cout << "your subscription expires in value of daysUntillExpirationdays" << endl;
        cout << "Renew now and save 10%! : " << endl;

    } else if (daysUntillExpiration >10){
        cout << "you have an active subscription: " << endl;

    } else if(daysUntillExpiration <=10){
        cout << "you subscription will expire soon.Renew now!: " << endl;
  
    }

     return 0;
}


