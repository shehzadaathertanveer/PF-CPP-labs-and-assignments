#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       for(int j=0; j<n;j++)
       {
        int top=i;
        int bottom=n-1-i;
        int left=j;
        int right=n-1-j;
        int layer=min(min(top,bottom),min(left,right));
        int value=n-layer;
        cout<<value;
            
       }
       cout<<endl;
    }
    return 0;
}