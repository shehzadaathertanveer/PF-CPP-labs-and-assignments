//this program replace occurence values
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int ar[20]={0};
    int value;

    srand(time(0));

    for (int i=0;i<20;i++)
    {
        ar[i]=rand()%50+1;
    }
    cout<<"Original Array: "<<endl;
    for (int i=0;i<20;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<endl<<"enter value to replace: ";
    cin>>value;

    int count=0;
   for (int i=0;i<20;i++)
    {
        if(ar[i]==value)
        {
            ar[i]=0;
            count++;
        }
    }

    cout<<"Found and replaced "<<count<<"  occurence(s)"<<endl;
    for (int i=0;i<20;i++)
    {
        cout<<ar[i]<<" ";
    }

}
