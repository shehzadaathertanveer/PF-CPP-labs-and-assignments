//this is a termperature converter

#include<iostream>
using namespace std;

double  convertTemp(double , char);

int main()
{
    char unit;
    double temp=0;
    double converted=0;

    cout<<"Please enter temerature value: ";
    cin>>temp;

    cout<<"Please enter unit (C/F): ";
    cin>>unit;

    while(unit !=  'c'  && unit !='C' && unit != 'F' && unit != 'f' )
    {
        cout<<endl<<"Invalid Input"<<endl;
        cout<<"Please enter unit (C/F): ";
        cin>>unit;
    }

    converted=convertTemp(temp,unit);

    if(unit=='c' || unit == 'C')
    {
        cout<<temp<<" C = "<<converted<<" F";
    }
    else if(unit=='f' || unit == 'F')
    {
        cout<<temp<<" F = "<<converted<<" C";
    }
    return 0;
}

double convertTemp(double temp,char unit)
{
    double converted=0;

    if(unit=='c' || unit == 'C')
    {
        converted=((temp * ( 9.0 / 5 )) + 32);

    }
    else if(unit=='f' || unit == 'F')
    {
        converted=(( temp - 32 ) * ( 5.0 / 9 ));
    }
   return converted;
}