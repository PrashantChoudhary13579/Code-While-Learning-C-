// In order to work with files in c++ , you will have to
// open it . Primarly, there are 2 ways to open a file
// 1. using the constructor
// 2.using the member function open() of the
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //     string st="Prashant Bhai";
    //     string st2;
    //     // ofstream out("sample.txt"); // opening a file using constructor
    //     // out<<st; // writing into the file
    //      // cout<<st;// writting into the console
    //     ifstream in("sequential1.exe");
    //     // in>>st2;
    //    while( getline(in, st2))
    //    {
    //         cout<<st2;

    //    }

    ofstream hout("file.txt");
    cout << "Enter the name";
    string name;
    cin >> name;
    // hout<<name;
    hout << "My name is " << name << endl;

    hout.close();
    ifstream hin("file.txt");
    string content;
    cout << "The content of this file is -" << endl;
    while (getline(hin, content))
    {
        cout<<content;
    }
    
    
         
    hin.close();
    return 0;
}