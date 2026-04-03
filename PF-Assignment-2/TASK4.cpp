//Shehzada Ather BITF25A047 BSIT AfterNoon
//this program calculates average
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    char colon;
    int math=0, eng=0, sci=0;
    double avg=0, sum=0, avgMath=0, avgSci=0, avgEng=0;
    for( int i=1;i<=5;i++)
    { 
        cout<<"Please enter the marks and name of student "<<i<<": "<<endl; 
        cout<<"Name: ";
        cin>>name;
        cout<<"Math: ";
        cin>>math;
        cout<<"Science: ";
        cin>>sci;
        cout<<"English: ";
        cin>>eng;
        sum=math+sci+eng;
        avg=(double)sum/3;
        avgMath+=math;  
        avgSci+=sci;
        avgEng+=eng;
        cout<<"--------Result--------"<<endl ;
        cout<<name <<setw(15)<<" | Total: "<<sum<<" | Average: "<<avg<<endl<<endl;
    }    
    cout<<endl;
    avgMath=(double)avgMath/5;
    avgSci=(double)avgSci/5;
    avgEng=(double)avgEng/5;
    cout<<"Class Avg -> Math: "<<avgMath<<"  Science: "<<avgSci<<"  English: "<<avgEng<<endl;         
    
}