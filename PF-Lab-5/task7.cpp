//this program calculates monthly saving

#include<iostream>
using namespace std;
int main()
{
    int salary=0,expense=0,monthlyExpense=0,saving=0, choice=0;
    do
    {
        cout<<"1. Calculate savings for a month"<<endl<<"2. Exit"<<endl;
        cout<<"please enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Please enter your monthly salary: ";
            cin>>salary;
            cout<<"please enter your weekly expense: ";
            cin>>expense;
            for(int i=0;i<4;i++)
            {
                monthlyExpense=monthlyExpense+expense;
            }
            saving=salary-monthlyExpense;
            cout<< "total expense for 4 weeks: "<<monthlyExpense <<endl;
            cout<<"total saving: "<<saving <<endl <<endl;
        }  

    }while(choice!=2);
    cout<<"program is terminated";
    return 0;
}