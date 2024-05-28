// Template by using function
#include<iostream>
#include<conio.h>

using namespace std;
template<class T>
T  show(T a,T b)
{
    cout<<"A = "<<a<<"  "<<"B = "<<b<<endl;

}
int main()
{
    int p=10,q=10;
    char m='a',n='b';
    float s=12.34,f=34.45;
    // clrscr();
    show(p,q);
    show(m,n);
    show(s,f);
    getch();
}