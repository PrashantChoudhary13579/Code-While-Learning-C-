#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream outfile;
char name[20];
cout<<"Enter the name of the file"<<endl;
cin>>name;
outfile.open("naame.txt");
outfile<<"The contents of the file is called "<<name<<endl;
outfile<<"this is a test "<<endl;
outfile<<"program to store "<<endl;
outfile<<"a set of lines onto a file "<<endl;
// outfile.close();
}