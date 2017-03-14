#include<iostream>
#include<fstream>

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

int main() {
char** my2DArray = create2DArray();
for (int h = 0; h < 100; h++)
{
   for(int w = 0; w < 50; w++)
   {
      cout << my2DArray[h][w];
   }
   cout << endl;
}
return 0;
}

