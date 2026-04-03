#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
   int num, large=-9999;
   ifstream fin;
   fin.open("data.txt");
   if(!fin.fail())
   { 
    cout<<"Reading numbers from file..."<<endl<<endl;
    cout<<"Numbers: ";
    while( fin>>num )
    {
        cout<<num<<" ";
        if( num>large)
        {
            large= num;
        }
    }
    cout<<endl;
    cout<<"largest number is: "<<large;
   }
   else
   {
    cout<<"Error in process of file opening please try again.";
   }
   fin.close();
   return 0;
}