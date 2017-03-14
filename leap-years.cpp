#include <iostream>

using namespace std;

int main()
{
int days = 0;
int total = 0;
int total_first_sundays =0;
for(int y = 1900; y <= 2000; y ++)
{
   
   if(((y % 4)==0)&&(y!=1900))
   {
      cout << y << " " << total << endl;
      days = 366;
   }
   else
   {
      days = 365;
      cout << y << " " << total << endl;
   }
   int days_in_month = 0;
   for(int m = 1;m <= 12; m++)
   {
      switch (m) {
         case 2:
            if(days == 365)
                days_in_month = 28;
            else
                days_in_month = 29;
            break;
         case 4:
         case 6:
         case 9:
         case 11:
            days_in_month = 30;
            break;
         default:
            days_in_month = 31;
      }
      for(int d = 1;d <= days_in_month;d++)
      { 
         total++;
         if((total % 7)== 0)
         {
            //cout << "sunday" << endl;
            if(d == 1)
            {
               total_first_sundays++;
               cout << d << "/" << m << "/" << y << endl;
            }
         }
         //cout << d << "/" << m << "/" << y << endl;
      }
   }
   /*for(int d = 1;d <= days;d++)
   {
      total++;
      if((total % 7)==0)
         cout << "sunday" << endl;
       
      if(d < 32)
         cout << d << "january" << endl;
      if(days != 366)
      {
         if((d > 31) && (d < 60))
            cout << d-31 << "february" << endl;
         if((d > ))
      }
      else
      {       
         if((d > 31) && (d < 60))
            cout << d-31 << "february" << endl;
      }
   }*/
}
cout << total_first_sundays << endl;

}
