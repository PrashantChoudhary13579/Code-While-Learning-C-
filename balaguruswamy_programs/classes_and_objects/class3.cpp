/* A program to illustrate the use of the simple arithmetic operations such as addition , subtraction , multiplication
and division using a member function. These methods are defined within the scope of a class definition.*/
#include <iostream>
using namespace std;
class sample
{
    int x, y;

public:
    void getinfo()
    {
        cout << "Enter any two numbers " << endl;
        cin >> x >> y;
    }
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "Sum = " << sum() << endl;
        cout << "Difference = " << diff() << endl;
        cout << "Multiplication = " << multiply() << endl;
        cout << "Division = " << division() << endl;
    }
    int sum()
    {
        return x + y;
    }
    int diff()
    {
        return x - y;
    }
    int multiply()
    {
        return x * y;
    }
    float division()
    {
        return ((float)x / (float)y);
    }
};
int main()
{
    sample s;
    s.getinfo();
    s.display();
    s.sum();
    s.diff();
    s.multiply();
    s.division();
    return 0;
}
