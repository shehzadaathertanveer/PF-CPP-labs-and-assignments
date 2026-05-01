// This program prints a diamond of stars
#include<iostream>

using namespace std;

void pattern(int n);

int main()
{
    int num;

    cout<<"Please enter a odd number between 5 and 15: ";
    cin>>num;

    while (num<5||num>15||num%2==0)
    {
        cout<<endl<<"Invalid Input"<<endl;
        cout<<"Please enter a odd number between 5 and 15: ";
        cin>>num;
    }

    pattern(num);

}

void pattern(int n)
{
    int middle = n / 2 + 1;
    for (int i = 1; i <= middle; i++) 
    {
      for (int j = 1; j <= middle - i; j++)
      {
        cout << " ";
      }
      for (int j = 1; j <= 2 * i - 1; j++) 
      {
        cout << "*";
      }
      cout << endl;
    }
    for (int i = middle - 1; i >= 1; i--) 
    {
      for (int j = 1; j <= middle - i; j++) 
      {
        cout << " ";
      }
      for (int j = 1; j <= 2 * i - 1; j++)
      {
        cout << "*";
      }
      cout << endl;
    }

}