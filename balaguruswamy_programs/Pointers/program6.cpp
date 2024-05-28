// Pointer to function
#include<iostream>
using namespace std;
typedef void (*funptr)(int,int);

void add(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
void subtract(int a,int b)
{
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
}
int main()
{
    funptr ptr;
   
    ptr=&add;
    ptr(10,23);
    ptr=&subtract;
    ptr(34,23);

}