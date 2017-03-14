#include <math.h>
#include <iostream>

using namespace std;

int main() {

   int a, b, c;
   for(a = 1;a < 1000;a++)
   {
      for(b = 1;b < 1000;b++)
      {
          c = sqrt(pow(a,2) + pow(b,2));
          if((a + b + c) == 1000){
             int a2 = pow(a,2);
             int b2 = pow(b,2);
             int c2 = pow(c,2);
             int a2b = a2 + b2;
             int rem = c2 % c2;
             //cout << rem << endl;
             if(a2b == c2)
             {
                cout << 'a' << a << 'b' << b << 'c' << c << endl;
                cout << "a2 " << a2 << " b2 " << b2 << " c2 " << c2 << endl;
                cout << a*b*c << endl;
             } 
         }
      }
   }

   return 0;
}
