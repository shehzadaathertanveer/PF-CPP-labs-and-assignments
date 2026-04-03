// this program prints tables of given input
#include <iostream>
using namespace std;
int main()
{
    int tableNo=0, limit=0 ,count=1 , product=0;
    cout << "Please enter the number whose table u wish to check: ";
    cin >> tableNo;
    cout << "Please enter the limit of ur table: ";
    cin >> limit;
    while (count <= limit)
    {
      product = tableNo * count;
      cout << tableNo <<" x " << count <<" = " << product <<endl;
      count = count + 1;
    }
    return 0;
}