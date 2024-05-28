// Taking input from the files and getting the output into the console
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    const int size = 80;
    string str; // But if we use string type data_type then we have do only some thing that is
                // getline( stream_object , variable of string)
    // char str[size];   // If we take char type data type then we have do various things such as
    // stream_object.getline( variable , size of the character )

    ifstream fin1, fin2;
    fin1.open("country.exe");
    fin2.open("capitals.exe");
    for (int i = 1; i < 7; i++)
    {
        if (fin1.eof() != 0)
        {
            cout << "Exit from the country" << endl;
            exit(1);
        }
        getline(fin1, str);
        cout << "Capital of " << str;
        
        if (fin2.eof() != 0)
        {
            cout << "Exit from the capitals" << endl;
            exit(1);
        }
        getline(fin2, str);
        cout << " - " << str << endl;
    }
    // fin2.close();
    // fin1.close();
    return 0;
}