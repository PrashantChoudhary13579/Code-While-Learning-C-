#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream onfile;
    onfile.open("file.txt");
    onfile<<"File created successfully"<<endl;
    onfile<<"Thank you so much :"<<endl;
    cout<<"The data has been saved in the program "<<endl;
    cout<<"File created successfully"<<endl;
    onfile.close();
    ifstream infile;   // infile is an object of ifstream 
    string str;  //str is a variable of string
    infile.open("file.txt");  //by using this we are opening a file of the name file and print it in the console output
    while(getline(infile,str))
    {
    cout<<str;  //printing the string
         }  // it is reading the data from the file
    infile.close();  //closing the file

}