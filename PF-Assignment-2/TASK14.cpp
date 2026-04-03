//SHEHZADA ATHER BITF25A047 BSIT AFTERNOOON
//THIS PROGAM PRINTS TABLE
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter positive number N: ";
    cin>>n;
    while(n<0)
    {
        cout<<"ERROR: Please enter only positive value N: ";
        cin>>n;
    }
    for(int i=1 ;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<setw(6)<<i*j;
        }
        cout<<endl;
    }
    return 0;
}