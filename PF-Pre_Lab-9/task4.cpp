//this program swap the value of two variables using call by reference
#include <iostream>

using namespace std;

void swapValues(int &a,int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=15,b=42;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    swapValues(a,b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
    return 0;
}