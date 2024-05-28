/*
Write a program to generate a series of fibonacci numbers using the constructor where the constructor member
function has been defined in the scope of class definition itself.
*/
#include<iostream>

using namespace std;

    class fibonacci{
        long int f0,f1,f2,fib;
        public:
          fibonacci(){  //This is the default constructor
            f0=0;
            f1=1;
            cout<<"Fibonacci series of first 10 numbers "<<endl;
            cout<<f0<<"  "<<f1<<"  ";
            fib=f0+f1;
          }
          void increment(){   // this is the member  function
            f0=f1;
            f1=fib;
            fib=f0+f1;

          }
          void display(){
            cout<<fib<<"  ";
          }
    };
    int main()
    {
        fibonacci number;
        for (int i = 0; i < 10; i++)
        {
                number.display();
                number.increment();
        }
        return 0;
    }