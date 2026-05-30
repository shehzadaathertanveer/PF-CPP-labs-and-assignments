#include<iostream>
using namespace std;

void countEvenOdd(int[],int);

int main()
{
    int n=0;
    cout<<"Please enter number of sales: ";
    cin>>n;
    int sales[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Please enter element "<<i+1<<": ";
        cin>>sales[i];
    }

    countEvenOdd(sales,n);
}

void countEvenOdd(int arr[],int n)
{
    int even=0,odd=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Even count: "<<even<<endl;
    cout<<"Odd count: "<<odd;

}