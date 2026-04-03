//this program calculates score based on snacks
#include<iostream>
using namespace std;
int main()
{
    int n,score=0,value;
    cout<<"Please enter number of snacks: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      if(i%2==0)
      {
       value=i-(2*i);
      }
      else
      {
        value=i;
      }
      score=score+value;
    }
    cout<<"Net score: "<<score;
    return 0;
}