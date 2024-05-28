// Taking the data of 5 integer values from user and add the even numbers using pointer
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int array[50],*ptr,m,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>m;
    cout<<"Enter the value of the array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>array[i];
    }
    ptr=array;
    int s=0;
    for (int i = 0; i < m; i++)
    {
        if (*ptr%2==0)
        {
            s=s+(*ptr);
        }
        ptr++;
    }
    cout<<"The sum of the even numbers : "<<s<<endl;
    return 0;
    
    
} // namespace std;
