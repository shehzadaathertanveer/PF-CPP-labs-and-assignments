//Shehzada ather BITF25A047 BSIT Afternoon
//This program prints fibonacci sequence
#include<iostream>
using namespace std;
int main()
{
    int n, first=-0,second=1,next=0;
    cout<<"Please enter the limit: ";
    cin>>n;
    cout<<endl<<endl;
    cout<<"Fibonacci Sequence upto "<<n <<": " <<endl;


    for(int i=0; first<=n; i++)
    {
        cout<<first <<"  ";
        next = first +  second;
        first=second;
        second=next;
    }
    return 0;
}