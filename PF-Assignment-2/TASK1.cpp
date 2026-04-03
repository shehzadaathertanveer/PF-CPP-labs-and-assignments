//SHEHZADA ATHER BITF25A047 BSIT Afternoon
//This program calculates the sum of squares of first n natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n=0,sum=0;
    cout<<"Please enter a positive integer: ";
    cin>>n;
    cout<<endl<<endl;
    while(n<0)
    {
        cout<<"Invalid input! please enter a positive integer: ";
        cin>>n;
    }
    cout<<"Sum of squares (";
    int i=1;
    while(i<n)
    {  
        cout<<i << "^2";
        if(i<n-1)
        {
            cout<<" + ";
        }
        sum=sum+(i*i);
        i++;

    }
    cout <<") = "<<sum;
    return 0;
}


