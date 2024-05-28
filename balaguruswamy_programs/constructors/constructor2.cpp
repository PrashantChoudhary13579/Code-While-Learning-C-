/*
Write a program to demonstrate how to use a special member function , namely , constructor in C++ .
*/
#include<iostream>

using namespace std;

    class name{
        public:
            name()      // while declaring a constructor it is declared by the class name
            {
                cout<<"For class constructor "<<endl;
            }
    };   
int main(){
    name obj;
    name run;
    
    return 0;
}