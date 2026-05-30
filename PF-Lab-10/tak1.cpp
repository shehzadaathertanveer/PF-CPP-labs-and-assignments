//this task merges and sort 2 arays
#include <iostream>
using namespace std;

void mergeSortedArray(int m[],int sm,int a1[],int s1,int a2[],int s2 );

int main()
{
    int s1 = 3, s2 = 6;
    int a1[] = {1,4,7};
    int a2[] = {2,3,5,6,8,10};

    int sm = s1 + s2;

    int m[sm];

    cout<<"Array1: ";
    for(int i=0;i<s1;i++)
    {
        cout<<a1[i]<<" ";
    }

    cout<<endl<<"Array2: ";
    for(int i=0;i<s2;i++)
    {
        cout<<a2[i]<<" ";
    }

    cout<<endl<<endl;

    mergeSortedArray( m, sm, a1, s1, a2, s2 );

    return 0;
}
void mergeSortedArray(int m[], int sm, int a1[], int s1, int a2[], int s2 )
{
    int count1=0 , count2=0;

    for(int i=0 ; i<sm ; i++ )
    {
        if(a1[count1] < a2[count2])
        {
            m[i] = a1[count1];
            count1++;
        }
        else if(a2[count2] < a1[count1])
        {
            m[i] = a2[count2];
            count2++;
        }
    }
    
    cout<<"Merged Sorted Array: ";

    for(int i =0 ; i <sm ; i++)
    {
        cout <<m[i] <<" ";
    }
}