#include<iostream>
using namespace std;

const int COLSIZE=4;

void transpose(int mat[][COLSIZE],int size);

int main()
{
    int size = COLSIZE;
    int arr[size][COLSIZE];

    for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            cout << "Please enter value: ";
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix: " << endl;

     for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            cout << arr[i][j] <<"  ";
        }
        cout << endl;
    }
    cout << endl;

    transpose(arr,size);

    return 0;
}

void transpose(int mat[][COLSIZE],int size)
{
    int temp=0; 

     for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            if(i < j)
            {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
            
        }
    }

    cout << "Transposed Matrix: "<<endl;

     for(int i = 0 ; i < size ; i++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            cout << mat[i][j] <<"  ";
        }
        cout<<endl;
    }


}
