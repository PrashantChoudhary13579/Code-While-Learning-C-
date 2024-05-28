#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int i=0;
    char *ptr[10]={ "books","television","storeroom","gossiphing","videogames"};
    char str[30];
    cout<<"Enter youur favorite free time things"<<endl;
    cin>>str;
    for (int  i = 0; i < 5; i++)
    {
        if (!strcmp(str ,ptr[i]))
        {
            cout<<"Your favorite thing is matched "<<endl;
            cout<<"And it is available here"<<endl;
            break;
        }
        if(i==4)
        cout<<"Your favourite is not matched "<<endl;
        // getch();
        
    }
    
}