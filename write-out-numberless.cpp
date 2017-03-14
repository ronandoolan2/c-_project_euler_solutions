#include <iostream>
#include <sstream>
#include <string.h>
#include <fstream>
   
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
   std::ofstream out("out.txt");
   std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
   std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!
   for(int w=1;w<1000;w++){
   stringstream strs;
   stringstream written_number;
   strs << w;
   string temp_str = strs.str();
   char* char_type = (char*) temp_str.c_str();
   char* info = strrev(char_type);
   //cout << char_type[0] << " " << char_type[1] << endl;
   int z = char_type[2] - '0';
   int a = 0;
   switch (z) {
      case 1:
         std::cout << "onehundred";
         a = 1;
         break;
      case 2:
         std::cout << "twohundred";
         a = 1;
         break;
      case 3:
         std::cout << "threehundred";
         a = 1;
         break;
      case 4:
         std::cout << "fourhundred";
         a = 1;
         break;
      case 5:
         std::cout << "fivehundred";
         a = 1;
         break;
      case 6:
         std::cout << "sixhundred";
         a = 1;
         break;
      case 7:
         std::cout << "sevenhundred";
         a = 1;
         break;
      case 8:
         std::cout << "eighthundred";
         a = 1;
         break;
      case 9:
         std::cout << "ninehundred";
         a = 1;
         break;
      }
   if(((char_type[1] != '0')||(char_type[0] != '0'))&&( a == 1))
      std::cout << "and"; 
      
   if(char_type[1] != '1')
   {
     
      int y = char_type[1] - '0';
      switch (y) {
         case 2:
            std::cout << "twenty";
            break;
         case 3:
            std::cout << "thirty";
            break;
         case 4:
            std::cout << "fourty";
            break;
         case 5:
            std::cout << "fifty";
            break;
         case 6:
            std::cout << "sixty";
            break;
         case 7:
            std::cout << "seventy";
            break;
         case 8:
            std::cout << "eighty";
            break;
         case 9:
            std::cout << "ninety";
            break;
      }
      int x = char_type[0] - '0';
      switch (x) {
         case 0:
            std::cout << endl;
            break;
         case 1:
            std::cout << "one" << endl;
            break;
         case 2:
            std::cout << "two" << endl;
            break;
         case 3:
            std::cout << "three" << endl;
            break;
         case 4:
            std::cout << "four" << endl;
            break;
         case 5:
            std::cout << "five" << endl;
            break;
         case 6:
            std::cout << "six" << endl;
            break;
         case 7:
            std::cout << "seven" << endl;
            break;
         case 8:
            std::cout << "eight" << endl;
            break;
         case 9:
            std::cout << "nine" << endl;
            break;
      }
   }
   else 
   {
      int x = char_type[0] - '0';
      switch (x) {
         case 0:
            std::cout << "ten" << endl;
            break;
         case 1:
            std::cout << "eleven" << endl;
            break;
         case 2:
            std::cout << "twelve" << endl;
            break;
         case 3:
            std::cout << "thirteen" << endl;
            break;
         case 4:
            std::cout << "fourteen" << endl;
            break;
         case 5:
            std::cout << "fifteen" << endl;
            break;
         case 6:
            std::cout << "sixteen" << endl;
            break;
         case 7:
            std::cout << "seventeen" << endl;
            break;
         case 8:
            std::cout << "eighteen" << endl;
            break;
         case 9:
            std::cout << "nineteen" << endl;
            break;
      }
   }
   //cout << strlen(char_type) << endl;
   }
   std::cout << "onethousand" << endl;
   std::cout.rdbuf(coutbuf);
}
