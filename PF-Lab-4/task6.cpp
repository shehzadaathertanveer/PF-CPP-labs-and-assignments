//this program calculates averagee of 5 vales
#include <iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, sum = 0, avg = 0;
    cout << "Please enter first value: ";
    cin >> num1;
    cout << "Please enter second value: ";
    cin >> num2;
    cout << "Please enter third value: ";
    cin >> num3;
    cout << "Please enter forth value: ";
    cin >> num4;
    cout << "Please enter fifth value: ";
    cin >> num5;

    sum = num1 + num2 + num3 + num4 + num5;
    avg = sum / 5;

    cout << "The average of values is: "<< avg;
    return 0;
}
