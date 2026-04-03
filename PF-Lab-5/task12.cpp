#include<iostream>
using namespace std;
int main()
{
    int pin , hold,d1,d2,d3,d4;
    cout<<"please enter a 4 digit pin: ";
    cin>>pin;
    while(pin<1000||pin>9999)   
    {
       cout<<"invalid input! please input a 4 digit number: ";
       cin>>pin;
    }
    hold=pin;

    d4=pin%10;
    pin=pin/10;

    d3=pin%10;
    pin=pin/10;
 
    d2=pin%10;
    pin=pin/10;

    d1=pin%10;
    pin=pin/10;

   if(d1<d2 && d2>d3 && d3<d4)
   {
      if(d1 != 0 && d2 != 0 && d3 != 0 && d4 != 0)
      {
        cout<<"success: "<<hold<<" follows Zig-Zag pattern."<<endl;
        cout<<"VALID PIN";
      }
      else
      {
        cout<<"INVALID PIN"<<endl;
        cout<<hold<<" does not follows Zig-Zag pattern due to presence of zeros."<<endl;
      }

   }
   else
   {   
     cout<<"INVALID PIN"<<endl;
     cout<<hold<<" does not follows Zig-Zag pattern due to voilation of digit rule"<<endl;
   }
   return 0;

}