//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM GENERATES PAIRED SEQUENCE
#include<iostream>
using namespace std;
int main()
{
    int start=0,end=0;
    cout<<"Please enter starting integer: ";
    cin>>start;
    cout<<"Please enter ending integer: ";
    cin>>end;
    for(int i=start;i<=end;i++)
    {
        for(int j=start; j<=end;j++)
        {
            cout<<"("<<i<<","<<j<<") ";
        }
    }
    return 0;
}
