//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
// THIS PROGRAM CONVERTS BINARY INTO DECIMAL
#include<iostream>
using namespace std;
int main()
{
    long long binary=0,temp=0,check=0;
    int count=0,decimal=0,digit=0,checkDigit=0;
    bool error=0;

    do
    { 
        error=0;
        cout<<"please enter a binary number (only 0s and 1s): ";
        cin>>binary;
        check=binary;
        while(check!=0)
        {   
           checkDigit=check % 10;
           if(checkDigit!=0 && checkDigit!=1)
           {
             error=1;
           }
           check=check/10;
        }

    }while(error==1);

    temp=binary;
    
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
   for(int i=0;i<count;i++)
    {
        int base=1,power=0;
        digit=binary%10;
        while(power<i)
        {
           base=base*2;
           power++;
        }
        decimal= decimal + (digit*base);
        binary=binary/10;
    }
    cout<<endl<<endl;
    cout<<"The equivalent decimal number is: "<<decimal;
    return 0;
}