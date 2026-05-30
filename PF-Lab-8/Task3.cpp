<<<<<<< HEAD
//this program is a second convertor
#include<iostream>

using namespace std;

void convertTime();

int main()
{
  convertTime();
}

void convertTime()
{
    int second=0,hour=0,minute=0;

    cout<<"Please enter total seconds: ";
    cin>>second;

    hour = second / 3600;
    second = second % 3600;

    minute = second / 60;
    second = second % 60;

    cout<<"Converted Time -> "<<hour<<" hour(s), "<<minute<<" minute(s), "<<second<<" second(s)";
    
}
=======
//this program is a second convertor
#include<iostream>

using namespace std;

void convertTime();

int main()
{
  convertTime();
}

void convertTime()
{
    int second=0,hour=0,minute=0;

    cout<<"Please enter total seconds: ";
    cin>>second;

    hour = second / 3600;
    second = second % 3600;

    minute = second / 60;
    second = second % 60;

    cout<<"Converted Time -> "<<hour<<" hour(s), "<<minute<<" minute(s), "<<second<<" second(s)";
    
}
>>>>>>> 2882d6db1ef561c28003870e8a4f3e59ece8a151
