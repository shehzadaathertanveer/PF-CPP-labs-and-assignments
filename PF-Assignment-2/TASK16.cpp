//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
// THIS PROGRAM PRINTS A BINARY PATTERN
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter a number: ";
    cin>>num;
    while(num<2||num%2==1)
    {
        cout<<"Invalid Input! please enter an even number >=2: ";
        cin>>num;
    }
    for(int i = 1; i<=num;i++)
    {
            for(int k=2;k<=i;k++ )
            {
                cout<<"0";
            }
            for(int l=num;l>=i;l--)
            {
                cout<<"1";
            }
        cout<<endl;
    }
}