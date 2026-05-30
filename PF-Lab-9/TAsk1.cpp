#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int n;
    int large=0;
    cout<<"Please enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter values of element "<<i+1<<": ";
        cin>>arr[i];
    }
    int swap;

    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
               

            if(arr[j]>large )
             {
                large=arr[j];
                 large=0;
             }
        
        }
        cout<<large<<" ";
        if(i=n-1)
        {
           arr[n-1]=-1;
           cout<<arr[n-1];
        }
  
    }

    
}