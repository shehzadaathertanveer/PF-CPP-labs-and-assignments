//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM PRINTS LARGEST AND 2ND LARGEST
#include<iostream>
using namespace std;
int main()
{
    int n,large=INT_MIN, second=INT_MIN ,num;
    cout<<"Please enter number of inputs (>=2): ";
    cin>>n;
    while(n<2)
    {
        cout<<"ERROR: Invalid Input!!";
        cout<<endl<<endl;
        cout<<"Please enter number of inputs (>=2): ";
        cin>>n;
    }
    for(int i=1; i<=n;i++)
    {
        cout<<"Please enter number "<<i<<" : ";
        cin>>num;
        if(num>large)
        {    second=large;
            large=num;
        }
        else if(num>second&&num!=large)
        {
            second=num;
        }
       
    }
    cout<<endl<<endl;
    cout<<"Largest number is: "<<large<<endl;
    cout<<"Second largest number is: "<<second;
    return 0;
}