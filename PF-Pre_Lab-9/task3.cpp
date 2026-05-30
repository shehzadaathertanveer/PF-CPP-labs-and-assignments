//this program converts celcius to kelvin and fahrenheit
#include <iostream>

using namespace std;

double convertTemp(double , char);
double celciusToKelvin(double);
void printAllConversions(double);

int main()
{
    double temp=0;

    cout<<"Please enter temerature value in Celsius: ";
    cin>>temp;

        printAllConversions(temp);

    
    return 0;
}

double convertTemp(double temp)
{
    double  converted=0;
   
    converted=(( temp * 9.0 / 5 ) + 32);
    return converted;}

double celciusToKelvin(double temp)
{
    double converted=0;
    converted=temp+273.15;
    return converted;
}

void printAllConversions(double temp)
{
    double f=0;
    double k=0;

    f=convertTemp(temp);
    k=celciusToKelvin(temp);

    cout<<"Clecius   : "<<temp<<" C"<<endl;
    cout<<"Fahrenheit: "<<f<<" F"<<endl;
    cout<<"Kelvin    : "<<k<<" K"<<endl;

}