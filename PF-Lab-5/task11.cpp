//this program prints all the prime number 
#include<iostream>
using namespace std;
int main()
{
    int n ,flag=1;
    cout<<"please enter a number: ";
    cin>>n;
    cout<<"prime numbers between 1 and "<<n <<" are: ";
    for(int i=2; i<=n ;i++)
    { 
        flag=1;
        for(int j=2;j<i;j++)
        {
            if( i % j == 0)
            {
                flag=0;
            }
  
        }
        if(flag==1)
        {
            cout <<i <<" ";
        }
    }
    return 0;
}