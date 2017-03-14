#include <math.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <errno.h>

using namespace std;
char** create2DArray()
    {

 ifstream myReadFile;
 myReadFile.open("numbers.txt");
 char** array2D = 0;
 array2D = new char*[100];
 char output[100];
// char numbers[100][50] = {{0}};
int i = 0;
 if (myReadFile.is_open()) {
 while (!myReadFile.eof()) {
    array2D[i] = new char[50];
    //numbers[i] = output;
    myReadFile >> output;

    cout<<i<<endl;
//    cout <<  (sizeof(output)/sizeof(*output))<< endl;
    for(int j = 0;j < (sizeof(output)/sizeof(*output));j++)
    {
       array2D[i][j] = output[j];
       //cout << j;
    }
    //numbers[i] = output;
    cout<<output<<endl;
    i++;

 }
}
myReadFile.close();
      return array2D;
}
char* strrev( char* s )
  {
  char  c;
  char* s0 = s - 1;
  char* s1 = s;
  
  cout << "reversing string len" << s << endl;
  /* Find the end of the string */
  while (*s1) ++s1;
  cout << "found end of string" << endl;
  /* Reverse it */
  while (s1-- > ++s0)
    {
    cout << "in reverse loop "  << endl;
    c   = *s0;
    cout << "in reverse loop " << *s1 << endl;
    *s0 = *s1;
    cout << "in reverse loop " << *s0 << endl;
    *s1 =  c;

    cout << "in reverse loop " << c << endl;
    }
  cout << "reversed" << endl;
  return s;
  }


char* big_add( char* big_number, char* big_number2)
{

    //read char array
    //char big_number[51] = "37107287533902102798797998220837590246510135740250";
    //char big_number2[51] = "46376937677490009712648124896970078050417018260538";
    char* ans;
    ans = (char*) malloc (51);
    cout << "created array in big add" << endl;
    char* big_number_1 = strrev(big_number);
    cout << "reversed string 1" << endl;
    cout << big_number2;
    char* big_number_2 = strrev(big_number2);

    cout << "reversed string 2" << endl;
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
    ans[51] = '\0';
    cout << ans << endl;
    cout << ans[0] << endl;
    //cout << strrev(ans) << endl;
    char* full_answer = strrev(ans); 
    return full_answer;

}


int main(){

    //char big_number[51];// = "37107287533902102798797998220837590246510135740250";
//    char big_number2[52] = "46376937677490009712648124896970078050417018260538";
//    char big_numbers[10][51] = {"37107287533902102798797998220837590246510135740250",
/*"46376937677490009712648124896970078050417018260538",
"74324986199524741059474233309513058123726617309629",
"91942213363574161572522430563301811072406154908250",
"23067588207539346171171980310421047513778063246676",
};*/
    char** my2DArray = create2DArray();
    cout << "created array" << endl;
    for (int h = 0; h < 100; h++)
    {
       for(int w = 0; w < 50; w++)
       {
          cout << my2DArray[h][w];
       }
       cout << endl;
    }
    cout << "printed array" << endl;
    char big_number[50] = {'0'};
    char* big_number3;
    cout << "created char" << endl;
    for (int h = 0; h < 100;h++)
    {
       for(int w = 0; w < 50; w++)
       {
          cout << w << endl;
          if(isdigit(my2DArray[h][w]))
            big_number[w] = my2DArray[h][w];
 //         cout << my2DArray[h][w];
       }
       big_number[50] = '\0';
       cout << "h "<< h << endl;
    cout << "big_number" << big_number << endl;
    cout << "big_number3" << big_number3 << endl; 
    if(h = 0){
       big_number3 = big_number;
       cout << big_number3 << endl;
    }
    else
    {
       cout << big_number3 << endl;
       big_number3 = big_add(big_number, big_number3);
       cout << big_number3 << endl;
    }
    }
//    free(big_number);
//    free(big_number2);
    free(big_number3);
}
