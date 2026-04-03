//this program prints even and odd number from 1 to N
#include <iostream>
using namespace std;
int main()
{
    int n=0, count=1;
    cout << "please enter a number: ";
    cin >> n;
    cout << "even numbers: " <<endl;
    while(count <= n)
    {
        if(count%2==0)
        {
            cout << count << endl;
        }
        count= count+1;
    }
    count=1;
    cout<<"odd numbers: "<<endl;
    while(count <= n)
    {
        if(count%2==1)
        {
            cout << count << endl;
        }
        count=count+1;
    }
    return 0;
}