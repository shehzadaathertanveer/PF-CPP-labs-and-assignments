#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int sum=0,num=0, mark=0,student=0, count=0;
    double avg=0.0;
    ofstream fout;
    fout.open("marks.txt");
    if(!fout.fail())
    {
        cout<<"Please enter number of students: ";
        cin>>student;
        for(int i=1;i<=student;i++)
        {
            cout<<"Student"<<i <<": ";
            cin>>mark;
            fout<<mark <<" ";
        }
        cout<<endl<<endl;
        cout<<"Data stored in file...";
        cout<<endl<<endl;
    }
    else
    {
        cout<<"Error in process of file creation please try again";
    }

    fout.close();

    ifstream fin;
    fin.open("marks.txt");
    cout<<"Reading from file..."<<endl;
    if(!fin.fail())
    { cout<<"Marks: ";
        while(fin>>num)
        {
            cout<<num <<" ";
            sum=sum+num;
            count++;
        }
        avg=(double)sum/(double)count;
        cout<<endl<<endl;
        cout<<"Average marks: "<<avg;
    }
    else
    {
        cout<<"Error in file opening please try again.";

    }
    fin.close();
    return 0;
}
