//SHEHZADA ATHER BITF25AO47 BSIT AFTERNOON
// THIS PROGRAM DISPLAYS A CLOCK
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   for(int HH=0; HH<24 ;HH++)
   {
    for(int MM=0; MM<60;MM++)
    {
        for(int SS=0;SS<60;SS++)
        {
            cout.fill('0');
            cout<<setw(2)<<HH <<":"<<setw(2)<<MM<<":"<<setw(2)<<SS;
            cout<<endl;
        }
    }
   }
   return 0;
}