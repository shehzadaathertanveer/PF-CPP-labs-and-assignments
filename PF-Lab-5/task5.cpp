// this program calculates pages read

#include <iostream>
using namespace std;
int main()
{
    int n;
    float pages=0;
    cout<<"Please enter numbers of days read: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     pages=pages+(1/(float)i);
    }
    cout<<"Total pages read: "<<pages;
    return 0;
}