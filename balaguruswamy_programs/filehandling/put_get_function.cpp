#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char string[80];
    cout<<"Enter the value in the string "<<endl;
    cin>>string;
    ofstream out;
    out.open("open.txt");
    int len=strlen(string)
    for (int i = 0; i < len; i++)
    {
        out.put(string[i]);
    }
    out.seekg(0);
    char ch;
    while(!file.eof())
    {
        
    }
    
}