//THIS PROGRAM PRINTS A SEPUENCE OF NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int num=0,row=0;
    cout<<"Please enter the starting number: "; 
    cin>>num;
    cout<<"Please enter number of rows: ";
    cin>>row;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<"  ";
            num=num+3;
        }
        cout<<endl;
    }
    return 0;
}