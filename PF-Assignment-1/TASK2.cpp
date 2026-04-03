// this program is for ATM machine
#include <iostream>
using namespace std;
int main ()
{
 int pin=0,correct=1234,balance=10000,amount=0;
  cout << "please enter pin: ";
  cin >> pin;
  if(pin==correct)
  { 
      cout << "please enter the amount you wish to withdraw :";
      cin >> amount;
      if(amount<=balance)
      {
        cout << "withdrawl successful.";
      }
      else
      {
        cout<<" insufficent funds.";
      }

  }
  else
  {
    cout<<"invalid pin";
  }
  return 0;
} 