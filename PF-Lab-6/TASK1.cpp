// Shehzada Ather ROLL#BITF25A047 BSIT AfterNoon
//this program prints a matrix of product

#include <iostream> 
#include <iomanip>
using namespace std;
int main()
{
    int start=0,limit=0;
    cout<<"Please enter the starting number: ";
    cin>>start;
    cout<<"Please enter the ending number: ";
    cin>>limit;
    cout<<endl;

    cout<<setw(4)<<"  ";
    for(int i=start;i<=limit;i++)
    {
        cout<<setw(5) <<i ;
    }
    cout<<endl;

    cout<<setw(4)<<" ";
     for(int j=start;j<=limit;j++)
    {
        cout<<"-----" ;
    }
    cout<<endl;

    for(int k = start ; k<=limit;k++ )
    {
        cout<<setw(2) <<k <<" |";
        for(int l = start ; l<= limit;l++)
        {
          cout<<setw(5)<<k*l ;
        }
        cout<<endl;
    }
return 0;
}