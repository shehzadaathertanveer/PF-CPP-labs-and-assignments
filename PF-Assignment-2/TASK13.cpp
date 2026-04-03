//SHEHZADA ATHER BITF25A047 BSIT AFTERNOON
//THIS PROGRAM PRINTS PYTHAGOREAN TRIPLES
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int i =1 ;i<=200;i++)
    {
        for(int j=i;j<=200;j++)

        {
            for(int k=1;k<=200;k++)
            {
                if((i*i)+(j*j)==(k*k))
                 {
                     cout<<"("<<setw(3)<<i<<", "<<setw(3)<<j<<", "<<setw(3)<<k<<")"<<setw(6) <<" -> " <<setw(3)<<i<<"^2 + " <<setw(3)<<j <<"^2 + " <<setw(3)<<k <<"^2";
                     cout<<endl;
                 }
                 
            }
        }
    }
    return 0;
}