//this program gets input from user and check odd and evenvalue among them
#include <iostream>

using namespace std;

int main()
{
    const int SIZE=15;
    int arr[SIZE]={0};

    int oddcount=0,evencount=0;

    for (int i=0;i<SIZE;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }

    for (int i=0;i<SIZE;i++)
    {
        if (arr[i]%2==0)
        {
            cout<<"Index "<<i<<" :"<<arr[i]<<" -> even."<<endl;
            evencount++;
        }
        else
        {
            cout<<"Index "<<i<<" :"<<arr[i]<<" -> odd."<<endl;
            oddcount++;
        }
    }
    cout<<"Even count: "<<evencount<<"   |   Odd count: "<<oddcount<<endl;

}