//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM PRINTS A CONCENTRIC  NUMBER SQUARE PATTERN
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Please enter a number: ";
    cin>>num;
    while(num<1 || num%2==0)
    {
        cout<<"Invalid Input! please enter an odd number >=1: ";
        cin>>num;
    }
    for(int i = 1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            int top=i;
            int left=j;
            int right=num-j+1;
            int bottom=num-i+1;
            int min=top;
            if(left<min)
            {
                min=left;
            }
            if(right<min)
            {
                min=right;
            }
            if(bottom<min)
            {
                min=bottom;
            }
            cout<<min<<" ";

        }
         cout<<endl;
    }
}