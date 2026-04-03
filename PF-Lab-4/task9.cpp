// this program calculates BMI
#include <iostream>
using namespace std;
int main()
{
    int weight =0 , height = 0;
    double BMI;
    cout <<"Please enter weight in pounds: ";
    cin >> weight;
    cout << "please enter height in inches: ";
    cin >> height;
    BMI= (weight * 703)/(height * height);
    if(BMI<18.5)
    {
        cout<<"Underweight.";
    }
    else if(( BMI >= 18.5 )&&( BMI <= 25 ))
    {
        cout<<"Optimal Weight";
    }
    else
    {
        cout<<"Overweight";
    }
    return 0;

}