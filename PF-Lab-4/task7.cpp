// this program prints a pattern of *
#include <iostream>
using namespace std;
int main()
{
    int loop1=0, loop2=0;
    while(loop1<5)
    {
        loop2=0;
        while(loop2<=loop1)
        {
            cout << "*" ;
            loop2 = loop2 + 1;
        }
        cout << endl;
        loop1 = loop1 + 1;
    }
    return 0;
}