#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    std::vector<long long int> primes;
    primes.push_back(2);
    for(long long int i=3; i < sqrt(4085147514300); i++)
    {
        bool prime=true;
        for(long long int j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
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
    long long int count = 0;
    for (std::vector<long long int>::const_iterator i = primes.begin(); i != primes.end(); ++i)
    {
       if(*i > 2000000) break;
       count = count + *i;
       cout << *i << endl;
//       if(*i > 10) break;
    }
    cout << count << endl;
    return 0;
}
