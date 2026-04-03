//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
// THIS PROGRAM COVERTS DECIMAL INTO BASE-9
#include<iostream>
using namespace std;
int main()
{
    int decimal=0,digit=0,tens=1,base9=0;
    cout<<"Please enter a decimal(base-10) number: ";
    cin>>decimal;
    cout<<endl<<endl;
    while(decimal!=0)
    {
      digit=decimal%9;
      base9=base9+(digit*tens);
      decimal=decimal/9;
      tens=tens*10;
    }
    cout<<"The equivalent number in base-9 is: "<<base9;
    return 0;
}