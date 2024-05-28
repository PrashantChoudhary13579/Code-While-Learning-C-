// Learning the use of the pointer to allocating the address of an array 
#include<iostream>
#include<conio.h>
// #include <iomanip>
using namespace std;
int main()
{
    char a[]={'z','e','f','m','r'}; //making an array- it may be of any data_type.
    char *ptr, i; // declaraing a pointervariable and integer type variable i
    // clrscr();
    cout<<"The elements of the array "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;  //Displaying the items in array

    }
    ptr=a;  // This is the different way of defining the pointer_variable 
    cout<<"Value of ptr : "<<*ptr<<endl;
    ptr++;
    cout<<"Value of ptr++ : "<<*ptr<<endl;
    ptr--;
    cout<<"Value of ptr-- : "<<*ptr<<endl;
    ptr=ptr+3;
    cout<<"Value of ptr+3 : "<<*ptr<<endl;
    ptr=ptr-1;
    cout<<"Value of ptr-1 : "<<*ptr<<endl;
    ptr+=2;
    cout<<"Value of ptr=+2 : "<<*ptr<<endl;
    ptr-=4;
    cout<<"Value of ptr=-4 : "<<*ptr<<endl;
    // getch();
    return 0;


}