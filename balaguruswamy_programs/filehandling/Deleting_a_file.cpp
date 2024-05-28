#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int value=remove("file2.txt");
    if(value==0)
    {
        cout<<"File deleted";
    }
    else{
        cout<<"File not deleted";

    }
}