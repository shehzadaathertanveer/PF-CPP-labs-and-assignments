#include<iostream>
using namespace std;

void printVbox(int n);

int main()
{
    int num;
    cout<< "Please enter a number: ";
    cin>>num;
    while(num<8)
    {
        cout<<"Please enter a number greater than or equal to 8: ";
        cin>>num;
    }

    printVbox(num);
}

void printVbox(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n*2;j++)
        {
            if(i==1||j==1||i==n||j==n*2)
            {
                cout<<"?";
            }
            else if(i==j)
            {
                cout<<"@";
            }
            else if(i > 2 && j > n&&j<=n*2-2 && j>n*2-i)
            {
                cout<<"$";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}