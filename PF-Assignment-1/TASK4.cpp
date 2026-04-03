//this program is for calculating e-commerce shipping fee
#include <iostream>
using namespace std;
int main()
{
    int orderTotal=0 ;
    string location;
    cout << "please enter your order total: ";
    cin >> orderTotal;
    cout <<"please enter your location (loacl/International): ";
    cin >> location;
    if( location=="local" ) 
     {
        if(orderTotal>50)
        {
            cout << "shipping: free";
        }
        else
        {
           cout << "shipping: 5$";
        }
     }
     else if( location == "International" )
     {
        if(orderTotal>150)
        {
            cout << "shipping: 15$";
        }

        else
        {
            cout << "shipping: 30$";
        }
     }
     else
     {
        cout<<"invalid location input.";
     }
     return 0;
}