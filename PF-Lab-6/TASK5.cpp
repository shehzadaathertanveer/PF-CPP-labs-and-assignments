//Shehzada Ather BITF25A047 BSIT AfterNoon
// this program converts numbers
#include <iostream>
using namespace std;

int main()
{
    int choice;
    char cont = 'Y';

    while(cont=='Y' || cont=='y')
    {
        cout<<"--- NUMBER CONVERSION SYSTEM ---"<<endl;
        cout<<"1. Decimal to Binary"<<endl;
        cout<<"2. Binary to Decimal"<<endl;
        cout<<"3. Decimal to Hexadecimal"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"please select an option: ";
        cin>>choice;

        if(choice==1)
        {
            int num;
            cout<<"please enter decimal Number: ";
            cin>>num;

            if(num==0)
                cout<<"Binary Equivalent: 0"<<endl;
            else
            { 
                int n = num;
                int digits=0;

                while(n>0)
                {
                    n=n/2;
                    digits++;
                }

                for(int i=digits-1;i>=0;i--)
                {
                    int temp=num;
                    int b=1;
                    for(int j=0;j<i;j++)
                        b=b*2;
                    if(temp/b >= 1)
                    {
                        cout<<temp/b;
                        num=num-b*(temp/b);
                    }
                    else
                        cout<<0;
                }
                cout<<endl;
            }
        }

        else if(choice==2)
        {
            long long bin;
            cout<<"please enter binary Number: ";
            cin>>bin;

            int dec=0;
            int base=1;
            while(bin>0)
            {
                int digit = bin%10;
                dec = dec + digit*base;
                base = base*2;
                bin = bin/10;
            }
            cout<<"Decimal Equivalent: "<<dec<<endl;
        }

        else if(choice==3)
        {
            int num;
            cout<<"please enter decimal Number: ";
            cin>>num;

            if(num==0)
                cout<<"Hexadecimal Equivalent: 0"<<endl;
            else
            {
                int n=num;
                int digits=0;
                int temp=num;

                while(temp>0)
                {
                    temp=temp/16;
                    digits++;
                }

                for(int i=digits-1;i>=0;i--)
                {
                    int temp=num;
                    int p=1;
                    for(int j=0;j<i;j++)
                        p=p*16;

                    int digit=temp/p;
                    num=num-digit*p;

                    if(digit<10)
                        cout<<digit;
                    else if(digit==10)
                        cout<<"A";
                    else if(digit==11)
                        cout<<"B";
                    else if(digit==12)
                        cout<<"C";
                    else if(digit==13)
                        cout<<"D";
                    else if(digit==14)
                        cout<<"E";
                    else if(digit==15)
                        cout<<"F";
                }
                cout<<endl;
            }
        }

        else if(choice==4)
            break;

        cout<<"Would you like to continue? (Y/N): ";
        cin>>cont;
        cout<<endl;
    }

    return 0;
}