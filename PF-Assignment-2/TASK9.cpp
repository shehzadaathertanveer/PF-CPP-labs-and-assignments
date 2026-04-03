//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
// THIS PROGRAM CONVERTS BASE 7 NUMBER INTO DECIMAL
#include<iostream>
using namespace std;
int main()
{  
    int digit=0,decimal=0,count=0;

    cout<<"Instructions: Enter digits of input one by one from least significant to most only 0 to 6 valid inputs "<<endl;
    cout<<"Enter -1 to stop entering digits."<<endl<<endl;
  
    cout<<"Enter a Base-7 digit: ";
    cin>>digit;
    while(digit!=-1)
    {
        int base=1,power=0;
        while(power<count)
        {
         base=base*7;
         power++;
        }
        count++;
        decimal= decimal+(digit*base);
        cout<<"Enter a Base-7 digit: ";
        cin>>digit;
    }

    cout<<endl<<endl;
    cout<<"The equivalent number in base-10 is: "<<decimal;
    return 0;
}
