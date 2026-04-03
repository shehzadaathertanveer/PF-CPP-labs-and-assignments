#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line1, line2;
    ofstream fout;
    ifstream fin;

    fin.open("input.txt");
    if (!fin.fail()) 
    {
        fout.open("output.txt");
        if (!fout.fail())
        {
            cout << "Copying data from input.txt to output.txt..." << endl;
            while (fin >> line1) 
            {
                fout << line1 <<" " ;
            }
            cout << "Data copied successfully!" << endl;
            fout.close(); 
        } 
        else 
        {
            cout << "Error in creating output.txt" << endl;
        }
        fin.close();
    }
    else
    {
        cout << "Error in opening input.txt. please try again" << endl;
    }

    fin.open("output.txt");
    if (!fin.fail()) 
    {
        cout << "Contents of output.txt: " << endl;
        while (fin >> line2) 
        {
            cout << line2 << endl;
        }
        fin.close();
    } 
    else 
    {
        cout << "Error in opening output.txt please tyr again" << endl;
    }
    return 0;
}