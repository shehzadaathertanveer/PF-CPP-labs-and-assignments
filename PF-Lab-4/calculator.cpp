#include<iostream>
using namespace std;
int main()
{ int choice=0 , num1=0 ,num2=0;
    do
    { cout<<"Please select from the below menu"<<endl<<"1. Sum"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Devision"<<endl<<"5. Exit"<<endl;
      cout<<"Please enter your choice: "; 
        cin>>choice;
        while(choice<0 || choice>5)
        {
            cout<<"Invalid input please select from options 1 to 5: ";
            cin >> choice;
        }
        if(choice!=5)
        {
         cout<<"Please enter 2 numbers u wish to add, subtract, divide or multiply: ";
         cin>>num1>>num2;
        if(choice==1)
         { int sum=num1+num2;
            cout<<"The sum of 2 numbers is: "<<sum <<endl;
         }
        else if(choice==2)
         {
            int sub=num1-num2;
            cout<<"The result of 1st number subtracted by 2nd is: "<<sub <<endl;

         }

        else if(choice==3)
         {int mul=num1*num2;
            cout<<"The product of 2 numbers is: "<<mul <<endl;
            
         }

        else if(choice==4)
         {float div = (float)num1/ (float)num2 ;
            cout<<"The result of first number divided by second is : "<<div <<endl;        
         }

        }
    }while(choice!=5);
        cout<<"The program is exicuted.";
        return 0;
}



        



    

