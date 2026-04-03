//this is a ticket booking program

#include<iostream>
using namespace std;
int main()
{
    int tickets=0, book=0, bookings=0;
    cout<<"Please enter total tickets: ";
    cin>>tickets;
    do
    {
        cout<<"please enter number of tickets to book: ";
        cin>>book;
        if(book>tickets)
        {
            cout<<"Not enuogh tikets! Try again. " ;
            cout<<endl <<endl;
        }
    
        else
        {
           tickets-=book;
           cout<<"Booking successful! Tickets left: "<<tickets <<endl <<endl;
           bookings++;
        }
    }while(tickets!=0);

    cout <<endl << "All tickets sold out!" <<endl;
    cout << "Total successful bookings: "<<bookings;
    return 0;
}