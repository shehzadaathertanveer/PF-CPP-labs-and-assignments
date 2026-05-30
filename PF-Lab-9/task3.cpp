#include <iostream>
using namespace std;

void sortArray(int[],int);

int main()
{
    int arr[50];
    int n;
    cout<<"Please enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter values of element "<<i+1<<": ";
        cin>>arr[i];
    }

    sortArray(arr,n);
}

void sortArray(int arr[],int n)
{
    int small=arr[0];
    int swap=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(arr[i]>arr[j] )
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }


    }


    cout<<"sorted Array: {";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}";
}