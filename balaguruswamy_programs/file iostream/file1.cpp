#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream outf;
    // outf.open("text.txt");
    // outf << "USA" << endl;
    // outf << "Africa" << endl;
    // outf << "South Korea" << endl;
    // outf.close();
    // outf.open("Capitals.txt");
    // outf << "Washington" << endl;
    // outf << "continent" << endl;
    // outf << "seoul" << endl;
    // outf.close();

    string line;
    ifstream inf("text.txt");
    cout << "Contents of the country" << endl;
    while (getline(inf, line))
    {
        cout << line << endl;
    }
    inf.close();
    inf.open("capitals.txt");
    cout << "Contents of the capitals" << endl;
    while (getline(inf, line))
    {
        cout << line << "   ";
    }
    cout<<endl;
    cout<<endl;
    inf.close();
    inf.open("naame.txt");
    while(getline(inf,line))
    {
        cout<<line<<"  "<<endl;
    }

    // return 0;
}