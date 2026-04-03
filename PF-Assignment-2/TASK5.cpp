//SHEHZADA ATHER TANVEER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM CALCULATES YEARLY RAINFALL DATA
#include <iostream>
using namespace std;
int main()
{
    int year;
    float monthRain,sum=0,avg=0 ;
    cout<<"Please enter number of years: ";
    cin>>year;
    for(int i=1;i<=year; i ++)
    { 
        cout<<"Year "<<i <<": "<<endl;
        for(int j=1;j<=12;j++)
        {
           cout<<"  Month "<<j <<" rainfall (inches): ";
           cin>>monthRain;
           sum=sum+monthRain;
        }
        avg=sum/12;
        cout<<endl<<endl;
        cout<<"----------Statistics----------"<<endl;
        cout<<"Months recorded : 12"<<endl;
        cout<<"Year "<<i <<" total rain fall : "<<sum<<endl;
        cout<<"Average monthly Rain fall : "<<avg<<endl<<endl<<endl;
    }
    return 0;

}