//this program saves information about movies from use into a file

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int moviesDataSaver();

int main()
{

    moviesDataSaver();

}

int moviesDataSaver()
{
    string movieName;
    int year;

    cout<<" Please enter your favorite movie: ";
    getline(cin,movieName);
    cout<<"Please enter release year: ";
    cin>>year;

    ofstream fout;
    fout.open("movie_data.txt");

    if(!fout.fail())
    {
        fout<<"My favorite movie is "<<movieName<<", released in "<<year<<".";
        cout<<endl<<"data saved to movie_data.txt successfullyy"<<endl;
        return 1;
        fout.close();
    }
    else
    {
        cout<<endl<<"ERROR! could not open movies_data.txt file"<<endl;
        return 0;
    }
   
}
