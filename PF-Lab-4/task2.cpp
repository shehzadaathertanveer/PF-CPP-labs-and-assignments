//this program squares 2 input and sum it
#include <iostream>
using namespace std;
int main()
{
    int num1=0 ,num2=0 ,totalSum=0;
    cout << "Please enter the first number: " ;
    cin >> num1;

    cout << "please enter the second number: ";
    cin >> num2;

    totalSum = (num1 * num1) + (num2 * num2);
    cout << " The sum of square of two numbers is: " <<totalSum ;
    return 0 ;
}
