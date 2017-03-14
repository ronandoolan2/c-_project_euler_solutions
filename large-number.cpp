#include <math.h>
#include <iostream>
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

    //read char array
    char big_number[51] = "37107287533902102798797998220837590246510135740250";
    char big_number2[51] = "46376937677490009712648124896970078050417018260538";
    char ans[60] = {'0'};
    char* big_number_1 = strrev(big_number);
    char* big_number_2 = strrev(big_number2);
    //get length
    cout << strlen(big_number) << endl;
    int carry = 0;
    int number1;
    int number2;
    
    for(int i = 0;i < 50;i++)
    {
       cout << big_number_1[i] << endl;
       number1 = big_number_1[i] - '0'; 
       number2 = big_number_2[i] - '0';
       int answer = number1 + number2 + carry;
       cout << number1 << '+' << number2 << '=' << answer << endl;
       if(answer > 9)
       {
          carry = 1;
          answer = answer - 10;
       }
       else 
       {
          carry = 0;
       }
       char aChar = '0' + answer;
       ans[i] = aChar;
       cout << ans[i] << endl;
    }
    cout << ans << endl;
    cout << ans[0] << endl;
    cout << strrev(ans) << endl; 


}

