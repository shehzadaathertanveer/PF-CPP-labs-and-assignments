//Shehzada Ather BITF25A047 BSIT AfterNoon
// this program prints fibonacci pyramid
#include <iostream>
using namespace std;
int main()
{
    int limit=0;
    cout<<"Please enter number of rows: ";
    cin>>limit;
    for(int i=1; i<=limit ;i++)
    {
        int first=0,second=1,next=0;
        for(int j=0;j<i;j++)
        {
            cout<<first <<" ";
            next=first+second;
            first=second;
            second=next;
        }
        cout<<endl;
    }
    return 0;
}