#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char FileName[] = "/home/ronan/Downloads/c++/c++/project-euler/out.txt";

int main () 
{
    string lineBuffer;
    ifstream inMyStream (FileName); //open my file stream
    int Count = 0;

    if (inMyStream.is_open()) 
    {
       //create an array to hold the letter counts
       //int upperCaseCount[26] = {0};
//       int Count = 0;

       //read the text file
       while (!inMyStream.eof() )
       {
           //get a line of text
           getline (inMyStream, lineBuffer);
           //read through each letter in the lineBuffer
           char oneLetter;
           for( int n=0; n < (int)lineBuffer.length(); ++n )
           {
             oneLetter = char( lineBuffer[n] ); //get a letter
                //if (oneLetter >= 'A' && oneLetter <='Z') 
                //{ //decide if it is a capital letter
                     //upperCaseCount[int(oneLetter)- 65]++; //make the index match the count array
                         if (oneLetter >= 'a' && oneLetter <='z') 
                         { //decide if it is a lower letter
                               cout << oneLetter << endl;
//                               lowerCaseCount[int(oneLetter)- 65]++; //make the index match the count array
                            Count++;
                         }//end 
                //}//end
           }
        }//end of while

        inMyStream.close(); //close the file stream

        //display the counts
  //      for (int i= 0; i < 26; i++)
   //         cout << char(i + 65) << "\t\t" << lowerCaseCount[i] << char(i + 95) << "\t\t" << lowerCaseCount[i] << endl;
}//end of if
        else cout << "File Error: Open Failed";

       cout << Count << endl;
       return 0;
}
