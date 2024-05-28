// Gathering the general knowledge of the pointers 
#include<iostream>
#include<conio.h>
using namespace std;
// #include<iost
int main()
{
    float v=14.5, *ptr;
    ptr=&v;
    cout<<"The value of a : "<<v<<endl; //The value of a
    cout<<"The value of ptr : "<<ptr <<endl;
    *ptr=int((*ptr)/2);
    cout<<"The value of a : "<<v<<endl;  //The value of a after operating.
    cout<<"The value of ptr : "<<ptr <<endl;
    *ptr=(*ptr)*10;
    cout<<"The value of a : "<<v<<endl;  //The value of a after operating another operation.
    cout<<"The value of ptr : "<<ptr <<endl;
//This means that it is pointing to the same address as address is not changing .
    return 0;

    // cout<<"The value of v = "<<v<<endl;
    // cout<<"The value of p = "<<p<<endl;
    // cout<<"The value of *P = "<<*p<<endl;
    // cout<<"The value of &p = "<<&p<<endl;
    return 0;
}