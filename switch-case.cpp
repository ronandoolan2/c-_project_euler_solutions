#include <iostream>

using namespace std;

int main(){

   int x = 0;
   cin >> x;
   switch (x) {
     case 2:
       cout << "28 days";
       break;
     case 4:
     case 6:
     case 9:
     case 11:
       cout << "30 days";
       break;
     default:
       cout << "31 days";
   }
}
