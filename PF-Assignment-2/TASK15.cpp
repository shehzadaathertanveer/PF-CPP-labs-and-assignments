//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM PRINTS A PLUSS PATTERN
#include <iostream>
using namespace std;
int main()
{
    int height=0, width=0;

    cout<<"Please enter height: ";
    cin>>height;
    cout<<"Please enter width: ";
    cin>>width;

    while((height%2!=1)||(width%2!=1))
    {
        cout<<"please only enter both odd values"<<endl;
        cout<<"Please enter height: ";
        cin>>height;
        cout<<"Please enter width: ";
        cin>>width;
    }
    
    cout<<endl<<endl;
    for(int i=0;i<height;i++)
    {
        if(i%2==0)
        {   
            for(int j=0; j<width;j++)
            {
                cout<<"+";
            }   
        }
        else
        { 
            for(int j=0; j<((float)width/2);j++)
            {
                cout<<"+ ";
            }
        }
         cout<<endl;
    }
    return 0;
}