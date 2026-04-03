//this program checks for highest and second highest
#include<iostream>
using namespace std;    
int main()    
{
    int n,highest=0,secondHighest=0 ,score=0;
    cout<<"Enter the number of players: ";
    cin>>n;
    cout<<"Enter the scores of the players: ";
    cin>>score;
    highest = score;
    for(int i=1; i<n; i++)
    { 
        cout<<"Enter the scores of the players: ";
        cin>>score;
        if(score > highest)
        {
            secondHighest = highest;
            highest = score;
        }
        else if(score > secondHighest && score != highest)
        {
            secondHighest = score;
        }

    }
    cout<<"The highest score is: "<<highest<<endl;
    cout<<"The second highest score is: "<<secondHighest<<endl;
    return 0;
}
    