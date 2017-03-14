

#include<iostream>
 
using namespace std;
 
main()
{
   int c, first = 0, second = 1, next, total_even;
 
   for ( c = 0 ; c < 100 ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      if ( next > 4000000)
      {
         break;
      }
      cout << next << endl;
      if((next % 2) ==0) total_even = total_even + next;
   }
   cout << total_even << endl; 
   return 0;
}
