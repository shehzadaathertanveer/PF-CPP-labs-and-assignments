//Shehzada Ather BSITF25A047 BSIT After Noon
// this program prints factors
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int limit;
    cout<<"Please enter the upper limit: ";
    cin>>limit;

    for(int i =1 ; i <=limit ; i++)
    {  
        cout<<"Factor of " <<setw(2) <<i <<" : ";
        

        for(int j=1; j<=i ; j++)
        {
            if (i%j==0)
            {
                cout<<j <<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}