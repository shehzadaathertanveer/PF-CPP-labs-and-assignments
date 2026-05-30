// this program prints factorial
#include <iostream>

using namespace std;

long long factorial(int);
 
int main()
{
    int num;
    cout<<"Please enter a non-negative interger: ";
    cin>>num;

    factorial(num);
}

long long factorial(int n)
{
    long long fact=1;
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        cout<<n<<"! = "<<fact;
        return 0;
    }
    else
    {
        cout<<"Error: Factorial is not defined for negative number.";
        return -1;
    }
}
