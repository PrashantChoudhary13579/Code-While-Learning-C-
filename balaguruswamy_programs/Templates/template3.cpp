#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
class show{
    T a,b;
    public:
    show(T a , T b)
    {
        a=a;
        b=b;
    }
    show()
    {
        cout<<"A = "<<a<<"  "<<"B = "<<b;
        cout<<endl;

    }

};
int main()
{
    show <int> ob(10,20);
    // clrscr();
    ob.show()
    getch();
    return 0;
}