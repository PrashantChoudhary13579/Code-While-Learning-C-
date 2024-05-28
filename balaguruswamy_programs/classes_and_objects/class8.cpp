// Write a program to find the factorial of a given number using an oop technique.
#include <iostream>
using namespace std;
class fact
{
    int f, n;

public:
    int factorial(int n);
};
int fact::factorial(int n)
{
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp = temp * i;//temp*=i;
    }
    return (temp);
}
int main()
{
    fact f;
    int max;
    cout << "Enter the value of n " << endl;
    cin >> max;
    
    int total=f.factorial( max);
    cout << "The factorial of "<<max<<" is " << total << endl;
    return 0;
}