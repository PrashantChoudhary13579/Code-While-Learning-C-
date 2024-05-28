// Implementing Bubble Sort using template in C++
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void bubblesort (T arr[],int n)
{
    T temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
    
