    //THIS PROGRAM READS TEMPERATURE VALUES FROM USER AND STORE IT IN FILEE AND THEN USE DATA FROM FILE FOR PROCESSING
    #include<iostream>
    #include<fstream>
    #include<string>
    using namespace std;
    int main()
    {
        int aboveAvg=0,day=0;
        double temp=0,avg=0,sum=0,min=9999999,max=-9999999;
        string city;
        ofstream fout;
        ifstream fin;
        fout.open("temperatures.txt");
        if(fout)
        {
          cout<<"Please eneter the name od city:  ";
          getline(cin,city);
          cout<<"Please enter numbeer of days: ";
          cin>>day;
          while(day<3||day>7)
          {
            cout<<"Invalid input the range for days is from 3 to 7"<<endl;
            cout<<"Please enter numbeer of days: ";
            cin>>day;
          }
          fout<<city<<endl;
          for(int i=1;i<=day;i++)
          {
            cout<<"Day "<<i<<" temperature: ";
            cin>>temp;
            fout<<temp<<endl;
          }
          cout<<"Data saved to temperatures.txt"<<endl<<endl;
          fout.close();
        }
        else
        {
            cout<<"Error in creating temperatures.txt file";
        }
        
        fin.open("temperatures.txt");
        if(fin)
        {
          getline(fin,city);
          cout<<"--- Temperature Analysis for "<<city <<" ---"<<endl;
          while (fin>>temp)
          {
           sum=sum+temp;
           if(temp>max)
           {
            max=temp;
           }
           if(temp<min)
           {
            min=temp;
           }
          }
          avg=sum/day;
          cout<<"Min Temp  :  "<<min<<endl;
          cout<<"Max Temp  :  "<<max<<endl;
          cout<<"Average   :  "<<avg<<endl;
         fin.close();
         fin.open("temperatures.txt");
         if(fin)
         { 
            getline(fin,city);
            while(fin>>temp)
            { if(temp>avg)
                {
                    aboveAvg++;
                }
            }
            cout<<"Days above average: "<<aboveAvg;
            fin.close();
         }
         else
         {
            cout<<"Error in opening temperatures.txt.";
         }
        }
        else
        {
            cout<<"Error in opening temperatures.txt.";
        }
        return 0;
    
    }
