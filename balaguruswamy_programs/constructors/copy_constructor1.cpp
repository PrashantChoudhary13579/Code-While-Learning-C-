#include<iostream>

using namespace std;

    class X{
        int f0,f1,fib;
        int *ptr;
        public:
           X();
           
    }
    X::X()
    {
        f0=0;
        f1=1;
        fib=f0+f1;
    }
    X::X(X &ptr)
    {
        f0=ptr.f0;
        f1=ptr.f1;
        fib=ptr.fib;
    }
int main(){
    X a,b;
    a.X();
    b.X();

    
    return 0;
}