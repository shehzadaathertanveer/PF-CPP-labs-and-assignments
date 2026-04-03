//THIS PROGRAM READS DATA FROM A FILE AND GENERATES A SUMMARY DEPENDING UPON THE COUSTOME'S AMMOUNT
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int id=0,amount=0,count=0,large=INT_MIN,small=INT_MAX,largeCount=0;
    string name;
    ifstream fin;
    fin.open("Orders.txt");
    if(fin)
    {
        fin>>id;
       while(id!=-1)
       {
        fin>>amount;
        fin.ignore();
        getline(fin,name);
        if(amount>=1000)
        {
            largeCount++;
        }
        if(amount<small)
        {
            small=amount;
        }
        if(amount>large)
        {
            large=amount;
        }
        
        count++;
        fin>>id;
       }
       fin.close();
       fin.open("Orders.txt");
       if(fin)
       {
           cout<<largeCount <<" out of "<<count<<" orders  are high-value orders"<<endl<<endl;
           fin>>id;
           while(id!=-1)
           {
           fin>>amount;
           fin.ignore();
           getline(fin,name);
           if(amount==large)
           {
                cout<<"Highest order: "<<endl;
                cout<<"  Customer Name: "<<name<<endl;
                cout<<"  Order ID: "<<id<<endl;
                cout<<"  Amount: "<<amount<<endl<<endl;
           }
           fin>>id;
           }
           fin.close();
           fin.open("Orders.txt");
           if(fin)
           {
               fin>>id;
               while(id!=-1)
           {
               fin>>amount;
               fin.ignore();
               getline(fin,name);
               if(amount==small)
                {
                    cout<<"Lowest order: "<<endl;
                    cout<<"  Customer Name: "<<name<<endl;
                    cout<<"  Order ID: "<<id<<endl;
                    cout<<"  Amount: "<<amount<<endl;
                }
           fin>>id;
           }
           fin.close();
          }
          else
           {
               cout<<"Error in opening file orders.txt";
           }
       }
       else
       {
           cout<<"Error in opening file orders.txt";
       }
    }
    else
    {
       cout<<"Error in opening file orders.txt";
    }
    return 0;
}