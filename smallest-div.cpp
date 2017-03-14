#include<math.h>
#include<iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main () 
{
    int flag;
    for(int i = 20;i < 1000000000;i++){
        flag = 0;
        for(int j = 2;j < 21;j++){
           if((i % j) != 0) flag = 1;
        }
	if(flag == 0){ 
           cout << i << endl;
           break;
        }
    }
    return 0;
}
