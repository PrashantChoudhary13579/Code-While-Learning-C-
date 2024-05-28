/*      Writing a program to display a series of Fibonacci numbers using the constructor where the constructor member
    function has been defined out of the class definition using the scope resolution operator .*/
#include<iostream>

using namespace std;

    class fibonacci {
        private:
            int f0,f1,fib;
        public:
            fibonacci();
            void increment();
            void output();
            
    };
    fibonacci::fibonacci()
    {
        f0=0;
        f1=1;
        fib=f0+f1;
        cout<<"Fibonacci series of 10 numbers "<<endl;
        cout<<f0<<"  "<<f1<<"  ";

    }
    void fibonacci ::increment()
    {
        f0=f1;
        f1=fib;
        fib=f0+f1;
    }
    void fibonacci ::output()
    {
        cout<<fib<<"   ";
    }

int main(){
    fibonacci number;
    for(int i=0;i<10;i++)
    {
        number.output();
        number.increment();

    }
    
    return 0;
}