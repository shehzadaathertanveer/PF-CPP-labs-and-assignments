//this program gets input from user and check largest and  minimum value among them
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={0};

    int min=INT_MAX,max=INT_MIN;

    for (int i=0;i<10;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }

    for (int i=0;i<10;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Maximum value: "<<max<<endl;
    cout<<"Minimum value: "<<min<<endl;
}