#include<math.h>
#include<iostream>

using namespace std;

int main () 
{
    for (int i=2; i<100; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";

            }

        }   

    return 0;
}
