//this program greets user by input
#include <iostream>
using namespace std;
int main()
{
   int num = 0;
   cout << "Please enter 1 or 2: ";
   cin >> num;
   if(num == 1)
   {
    cout << "Hi I'm Shehzada Ather doing my first lab of programming fundamentals." <<endl;
   }
   else if(num == 2)
   {
    cout << "Hi I'm TA for PF this is also my first lab but as a TA" <<endl;
   } 
   else
   {
    cout << "Awww ! Ap kon?";
   }
   return 0;
}