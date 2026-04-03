//this program calculates possible ways
#include<iostream>
using namespace  std;
int main()
{
    int n ,step1=0,step2=1,totalways=0;
    cout<<"enter number of steps: ";
    cin>>n;
    for(int i =0; i <n;i++)
    {
        totalways=step1+step2;
        step1=step2;
        step2=totalways;
    }
    cout<<"Total distinct ways: "<<totalways;
    return 0;
 }    