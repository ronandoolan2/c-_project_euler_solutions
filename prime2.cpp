#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    std::vector<int> primes;
    primes.push_back(2);
    for(int i=3; i < sqrt(600851475143); i++)
    {
        bool prime=true;
        for(int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back(i);
            cout << i << " ";
        }
    }
    int largestprime = 1;
    for (std::vector<int>::const_iterator i = primes.begin(); i != primes.end(); ++i)
    {
       std::cout << *i << ' ' << (600851475143 % *i) << endl; 
       if((600851475143 % *i) == 0){
          largestprime = *i;
       }
    }
    std::cout << largestprime << endl;
    return 0;
}
