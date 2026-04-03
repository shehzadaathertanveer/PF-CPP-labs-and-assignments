//this is a guessing game

#include <iostream>
using namespace std;
int main()
{
    int num=38, guess=0, tries=1;
    cout << "Please guess the number (1-50): ";
    cin>>guess;
    while(guess<0||guess>50)
    {
        cout << "Invalid input. Please guess the number (1-50): ";
        cin>>guess;      
    }
    while(guess!=num)
    {
       if(guess<num)
       {
        cout << "Too low! Try again: ";
        cin >> guess;
       }
       else if (guess>num)
       {
        cout << "Too high! Try again: ";
        cin >> guess;
       }
       tries++;
    }
    cout << "Congratulations! You guessed the number in " <<tries <<" tries";
    return 0;
}