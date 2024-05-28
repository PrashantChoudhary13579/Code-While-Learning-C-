#include<iostream>
using namespace std;
template <typename T> 
T mymax(T x, T y)
{
    return (x>y)? x :y ;
}
int main()
{
    //Calling mymax for int 
    cout<<mymax<int> (3,4)<<endl;
    // Calling mymax for char
    cout<<mymax<char>('g','l')<<endl;
    //call mymax for char
    cout<<mymax<double>(3.56,8.6554849)<<endl;
    return 0;
}