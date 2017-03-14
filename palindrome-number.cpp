#include<math.h>
#include<iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main () 
{
    int product;
    int largest = 1;
    for (int i=2; i<1000; i++) 
        for (int j=2; j<1000; j++)
        {
           product = i*j;
           std::stringstream ss; 
           ss << product;
           std::string input = ss.str();
           if (input == string(input.rbegin(), input.rend())) {
              cout << input << " is a palindrome\n";
              if(product > largest) largest = product;
           }
        }   
    cout << largest << " is the largest " << endl;

    return 0;
}
