#include <math.h>
#include <iostream>

using namespace std;

int main() {
   int largest = 0;
   for(int i = 2;i < 1000000;i++)
   {
      //cout << i << endl;
      int count = 1;
      unsigned long long int x = i;
      while(x != 1)
      {
         if((x % 2) == 0)
         {
            x = x/2;
         }
         else
            x = 3*x + 1;
        // cout << x << " ";
         count++;
      }
      x++;
      //cout << count << endl;
   if(count > largest){
      largest = count;
      cout << largest << " " << i << endl;
   }
   }
   cout << "count " << largest << endl; 
}
