// this program calculates the total tax on product
#include <iostream>
using namespace std;
int main()
{
    double salesTax=0, countryTax=0, totalTax=0, price=0;
    cout << "Price: ";
    cin >> price;
    salesTax = price * 0.04;
    countryTax = price * 0.02;
    totalTax = salesTax + countryTax;
    cout << "Purchased Price: $" << price <<" State Tax: $" << salesTax <<" Country Tax: $"<< countryTax <<" Total Tax: $" <<totalTax;
    return 0;

}