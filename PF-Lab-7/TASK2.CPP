//THIS PROGRAM PRINTS A STAR PATTERN
#include<iostream>
using namespace std;
int main()
{
    int row=0;
    cout<<"Please enter number of rows: ";
    cin>>row;
    while(row<3||row>10)
    {
        cout<<"Invalid input the valid range for rows is 3 to 10"<<endl;
        cout<<"Please enter number of rows: ";
        cin>>row;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}