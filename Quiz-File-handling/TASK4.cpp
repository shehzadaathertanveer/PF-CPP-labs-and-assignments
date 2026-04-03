#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
    int even, odd ,num;
    ofstream fout1,fout2;
    ifstream fin1 ,fin2,fin;
    fin.open("data2.txt");
    if(!fin.fail())
    { 
        cout<<"reading numbers from file..."<<endl<<endl<<endl;
        fout1.open("even.txt");
        fout2.open("odd.txt");
       if(!fout1.fail()&&!fout2.fail())
       {
         while(fin>>num)
         {
            if(num % 2==0)
            {
                fout1<<num<<" ";
            }
            else
            {
                 fout2<<num<<" ";
            }
         }
        cout<<"Even numbers written to even.txt."<<endl;
        cout<<"Odd numbers written to odd.txt."<<endl;
        fout1.close();
        fout2.close();
       }
       else
       {
         cout<<"Error in creating even.txt and odd.txt" <<endl;
       }
       fin.close();
    }
    else
    {
        cout<<"Error in opening data2.txt" <<endl;
    }
    fin1.open("even.txt");
    fin2.open("odd.txt");
    if(!fin1.fail()&&!fin2.fail())
    {   
        cout<<"even.txt: "<<endl;
        while(fin1>>even)
        {
            cout<<even <<" ";
        }
        cout<<endl<<endl;
        cout<<"odd.txt: "<<endl;
        while(fin2>>odd)
        {
            cout<<odd<<" ";
        }
         fin1.close();
         fin2.close();
    }
    else
    {
        cout<<"Error in opening even.txt or odd.txt files.";
    }
    return 0;
}