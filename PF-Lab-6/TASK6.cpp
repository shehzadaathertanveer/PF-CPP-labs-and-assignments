//Shehzada Ather BITF25A047 BSIT Afternoon
// this program find anstraing number
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cout << "PLEase enter uppper limit: ";
    cin >> N;
    int total = 0;
    cout << "Scanning numbers between 1 and " << N << endl;   
    cout << "--------------------------------------" << endl; 

    for(int i = 1; i <= N; i++)
    {
        int temp = i;
        int digits = 0;
        while(temp > 0)
        {
            digits++;
            temp = temp / 10;
        }
        temp = i;
        int sum = 0;

        while(temp > 0)
        {
            int d = temp % 10;
            int power = 1;

            for(int j = 0; j < digits; j++)
            {
                power = power * d;
            }
            sum = sum + power;
            temp = temp / 10;
        }
        if(sum == i)
        {
            cout  << "[FOUND]  "<<setw(5) << i << "    ( " << digits << " - digits)" << endl;
            total++;
        }
    }

    cout << "--------------------------------------" << endl;
    cout << "Total Armstrong Numbers Found: " << total << endl;

    return 0;
}