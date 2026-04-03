// magic birthday
#include<iostream>
using namespace std;
int main()
{
    int month=0, day=0, year=0;
    cout << "please enter a numeric date: ";
    cin >> day;
    cout << "please enter a numeric month: ";
    cin >> month;
    cout << "please enter a numeric 2-digit year: ";
    cin >> year;
    if (day * month == year)
    {
        cout<<"The date is magic";
    }
    else
    {
        cout<<"The date is not magic";
    }
    return 0;
}