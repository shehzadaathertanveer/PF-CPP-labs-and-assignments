//shehzada Ather BITF25A047 BSIT AfterNoon
//this program prints arthemetic sequence
#include<iostream>
using namespace std;
int main()
{
    int a=0,d=0,n=0;

    cout<<"Please enter first term (a): ";
    cin>>a;
    
    cout<<"Please enter common difference (d): ";
    cin>>d;
    
    cout<<"Please enter number of terms (n): ";
    cin>>n;
    cout<<endl<<endl;
    cout<<"Sequence: ";
    for(int i=0;i<n-1;i++)
    {
        cout<<a<<", ";
        a=a+d;
    }
    cout<<a;
    return 0;
}