#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    std::vector<int> primes;
    primes.push_back(2);
    for(int i=3; i < sqrt(60085147514300); i++)
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
//            cout << i << " ";
        }
    }
    int count = 0;
    for (std::vector<int>::const_iterator i = primes.begin(); i != primes.end(); ++i)
    {
       count = count + *i;
       cout << *i << endl;
       if(*i > 2000000) break;
    }
    //std::cout << largestprime << endl;
    return 0;
}
