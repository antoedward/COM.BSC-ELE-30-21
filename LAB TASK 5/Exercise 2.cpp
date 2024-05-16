#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int daysUntillExpiration = rand() % 12;

    switch(daysUntillExpiration){
        case 0:
           cout << "your subscription has expired: " << endl;
           break;

        case 1:
            cout << "your subscription expires within a day: " << endl;
             cout << "Renew now and save 20%!: " << endl;

             break;

        case 2:
        case 3:
        case 4:
        case 5:
           cout << "your subscription expires in value of daysUntillExpirationdays: " << endl;
           cout << "Renew now and save 20%!: " << endl;
           break;

          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
             cout << "your subscription will expire soon. Renew now!: " << endl;
             break;

           default:
              cout << "you have an active subscription: " << endl;
              break;

        
    }

    return 0;
}