#include <iostream>
#include <sstream>
#include <string.h>
   
using namespace std;


char* strrev( char* s )
  {
  char  c;
  char* s0 = s - 1;
  char* s1 = s;

  /* Find the end of the string */
  while (*s1) ++s1;

  /* Reverse it */
  while (s1-- > ++s0)
    {
    c   = *s0;
    *s0 = *s1;
    *s1 =  c;
    }

  return s;
  }

int main()
{
   int x;
   cout << "write number" << endl;
   cin >> x;
   stringstream strs;
   stringstream written_number;
   strs << x;
   string temp_str = strs.str();
   char* char_type = (char*) temp_str.c_str();
   char* info = strrev(char_type);
   cout << char_type[0] << " " << char_type[1] << endl;
   int z = char_type[2] - '0';
   int a = 0;
   switch (z) {
      case 1:
         cout << "one hundred ";
         a = 1;
         break;
      case 2:
         cout << "two hundred ";
         a = 1;
         break;
      case 3:
         cout << "three hundred ";
         a = 1;
         break;
      case 4:
         cout << "four hundred ";
         a = 1;
         break;
      case 5:
         cout << "five hundred ";
         a = 1;
         break;
      case 6:
         cout << "six hundred ";
         a = 1;
         break;
      case 7:
         cout << "seven hundred ";
         a = 1;
         break;
      case 8:
         cout << "eight hundred ";
         a = 1;
         break;
      case 9:
         cout << "nine hundred ";
         a = 1;
         break;
      }
   if(((char_type[1] != '0')||(char_type[0] != '0'))&&( a == 1))
      cout << "and "; 
      
   if(char_type[1] != '1')
   {
     
      int y = char_type[1] - '0';
      switch (y) {
         case 2:
            cout << "twenty";
            break;
         case 3:
            cout << "thirty";
            break;
         case 4:
            cout << "fourty";
            break;
         case 5:
            cout << "fifty";
            break;
         case 6:
            cout << "sixty";
            break;
         case 7:
            cout << "seventy";
            break;
         case 8:
            cout << "eighty";
            break;
         case 9:
            cout << "ninety";
            break;
      }
      int x = char_type[0] - '0';
      if((char_type[0]!='0')&&((y>0)))
          cout << '-';
      switch (x) {
         case 1:
            cout << "one" << endl;
            break;
         case 2:
            cout << "two" << endl;
            break;
         case 3:
            cout << "three" << endl;
            break;
         case 4:
            cout << "four" << endl;
            break;
         case 5:
            cout << "five" << endl;
            break;
         case 6:
            cout << "six" << endl;
            break;
         case 7:
            cout << "seven" << endl;
            break;
         case 8:
            cout << "eight" << endl;
            break;
         case 9:
            cout << "nine" << endl;
            break;
      }
   }
   else 
   {
      int x = char_type[0] - '0';
      switch (x) {
         case 1:
            cout << "eleven" << endl;
            break;
         case 2:
            cout << "twelve" << endl;
            break;
         case 3:
            cout << "thirteen" << endl;
            break;
         case 4:
            cout << "fourteen" << endl;
            break;
         case 5:
            cout << "fifteen" << endl;
            break;
         case 6:
            cout << "sixteen" << endl;
            break;
         case 7:
            cout << "seventeen" << endl;
            break;
         case 8:
            cout << "eighteen" << endl;
            break;
         case 9:
            cout << "nineteen" << endl;
            break;
      }
   }
   cout << strlen(char_type) << endl;
   
}
