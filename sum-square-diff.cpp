#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main(){
int square_sum = 0;
for(int i = 1;i < 101;i++){
   square_sum = square_sum + pow(i,2);
   cout << pow(i,2) << endl;
}
printf("%d\n",square_sum);
int sum_square = 0;
for(int i = 1;i < 101;i++){
   sum_square = sum_square + i;
   printf("%d\n",sum_square);
}
printf("%d\n",sum_square);
sum_square = pow(sum_square,2);
printf("%d\n",sum_square);
int diff = sum_square - square_sum;
printf("%d\n",diff);

return 0;
}

