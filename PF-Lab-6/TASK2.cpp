// Shehzad Ather roll#BITF25A047 BSIT AfterNoon
// this program prints pattern of X and O
#include <iostream>
using namespace std;
int main()
{
 int size=0;
 cout<<"Please enter the size of your board: ";
 cin>>size;
 for(int i = 0; i<size ; i++)
 {
    for(int j=0; j<size ; j++)
    { 
        if (i%2==0 && j%2==0)
        {
           cout<<"X ";

        }
        else if(j%2==1 && i%2==1)
        {
            cout<<"X ";
        }
        else
        {
          cout<<"O ";
        }
    }
     cout<<endl;
 }
 return 0;
}