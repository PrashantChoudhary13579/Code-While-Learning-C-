// Again write a program to generate  a series of fibonacci series using copy constructor is
// defined within the class declaration itself.
#include <iostream>
#include <iomanip>

using namespace std;

class fibonacci
{
    int f0, f1, fib;

public:
    fibonacci()
    {
        f0 = 0;
        f1 = 1;
        fib = f0 + f1;
        
    }
    fibonacci (fibonacci &ptr){
        f0=ptr.f0;
        f1=ptr.f1;
        fib=ptr.fib;

    }
    void increment()
    {
        f0 = f1;
        f1 = fib;
        fib = f0 + f1;
    }
    void display()
    {
        cout << setw(4)<< fib << "  ";
    }

};

int
main()
{
    int n;
    fibonacci obj;
    cout<<"How many numbers are to be displayed "<<endl;
    cin>>n;
    for(int i=2;i<n-1;i++)
    {
        obj.display();
        obj.increment();

    }
    cout<<endl;
    return 0;
}