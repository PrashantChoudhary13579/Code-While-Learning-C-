#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("file.txt");
    out<<"This my me"<<endl;
    // cout<<"This is me also";
    out<<"Let's learn C++ ";
    out.close();
    ifstream in;
    string str;
    string str2;
    in.open("sample.txt");
    // in>>str>>str2;
    // cout<<str<<" "<<str2;
    while (in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl; 
    }
    
    return 0;
}