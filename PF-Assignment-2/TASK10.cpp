// SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM PRINTS A PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Please enter height of pyramid: ";
    cin>>height;
    cout<<endl;
    for(int i=1 ; i<=height ; i++)
    {
        for(int j=height; j>i; j--)
        {
            cout<<"  ";
        }
         for(int m=i ;m>1;m--)
        {
            cout<<m <<" ";
        }
          for(int k=1 ;k<=i;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}