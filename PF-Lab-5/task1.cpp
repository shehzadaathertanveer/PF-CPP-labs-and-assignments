//this program prints a sequence of even numbers

#include <iostream>
using namespace std;    

int main() 
{
  int num=0 , steps=0;
  cout << "Please enter a positive number: ";
  cin >> num;
  while(num<0)
    {
      cout << " Invalid input please enter a positive number: ";
      cin >> num;
    }
    cout << "Sequence: "<< num <<" ";
  while(num!=0)
   {
     if(num%2==0)
     { 
        num= num/2;
        cout << num <<" ";
     }
     else
     {
       num = num -1;
       cout << num <<" "; 
     }
     steps++;
   }
   cout <<endl << "Total steps: " <<steps;
   return 0;
}