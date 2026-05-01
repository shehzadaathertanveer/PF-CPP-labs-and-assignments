#include<iostream>
#include<fstream>

using namespace std;

void generateSensorLog(int days,int readingPerDay);
int main()
{
    int days=0,readings=0;

    cout<<"Please enter number of days: ";
    cin>>days;

    cout <<"Please enter readings per day: ";
    cin>>readings;

    generateSensorLog(days,readings);

}
void generateSensorLog(int days,int readingPerDay)
{
    int value=0;
    double avg,sum=0;
     
    ofstream fout;

    fout.open("sensor_data.txt");

    if(!fout.fail())
    {
        for(int i=1;i<=days;i++)
        {
            fout<<"Day "<<i<<": ";
            for(int j=1;j<=readingPerDay;j++)
            {
                value=rand()%26+15;
                fout<<value<<", ";
                sum=sum+value;
            }
            avg=sum/readingPerDay;
            fout<<" | Average: "<<avg<<endl;
        }
        fout.close();
        cout<<endl<<"sensor log saved to sensor_data.txt file"<<endl;

    }
    else
    {
        cout<<endl<<"ERROR in creating sesor_data.txt file"<<endl;
    }
    

}


