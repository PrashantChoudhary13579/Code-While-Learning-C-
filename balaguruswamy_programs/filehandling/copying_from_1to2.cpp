// WAP to copy the data of one file from one program to another
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    ofstream onfile;
    char str;
    infile.open("file.txt");
    onfile.open("file2.txt");
    while(infile.get(str))
    {
        onfile.put(str);
    }
    cout<<"Copied !!"<<endl;
    infile.close();
    onfile.close();
    return 0;
}