//this program takes transpose of a 2d array matrix

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int swap=0;

   for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
            if(i<j)
            {   
               swap= arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=swap;
            }
       }

    }

        for(int i=0;i<3;i++)
        {
           for(int j=0;j<3;j++)
           {
            cout<<arr[i][j]<<" ";
     
            }
            cout<<endl;
        }
}