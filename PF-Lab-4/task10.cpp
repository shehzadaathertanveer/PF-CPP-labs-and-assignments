// this program calculates time
#include <iostream>
using namespace std;
int main()
{
    int second=0 ,minute=0 ,day=0 ,hour=0;
    cout<<"please enter number of seconds: ";
    cin >> second;
    if(second>=86400)
    {
      day=second/86400;
      second= second %86400;
      hour=second/3600;
      second=second % 3600;
      minute= second/60;
      second=second%60;
      cout<<day <<" days," <<hour <<" hour," <<minute <<" minutes," <<second << " seconds";


    }
    else if( second>=3600)
    {
      hour=second/3600;
      second=second % 3600;
      minute= second/60;
      second=second%60;
      cout<<hour <<" hour," <<minute <<" minutes," <<second << " seconds";
 
    }
    else if (second>=60)
    {
      minute= second/60;
      second=second%60;
      cout <<minute <<"minutes," <<second << " seconds";
 
    }
    else
    {
        cout<< second <<"seconds";
    }
    return 0;

 }
