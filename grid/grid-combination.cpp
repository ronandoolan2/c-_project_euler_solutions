#include <math.h>
#include <iostream>

using namespace std;

inline int Factorial(int x) {
  return (x == 1 ? x : x * Factorial(x - 1));
}

int main()
{
   int fac = Factorial(20);
   cout << Factorial(20)/(Factorial(2)*Factorial(20-2)) << endl;  

}
