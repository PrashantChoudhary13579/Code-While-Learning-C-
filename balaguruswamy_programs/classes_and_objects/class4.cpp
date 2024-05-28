/*A program to illustrate the use of the simple arithmetic operations such as addition , subtraction , multiplication
and division using a member function. These methods are defined within the scope of a class definition.*/
#include <iostream>
using namespace std;
class sample
{
    int x, y;

public:
    void getinfo();
    void putinfo();
    int sum();
    int diff();
    int mul();
    float div();

};
 void sample::getinfo()
{
    cout << "Enter two numbers" << endl;
    cin >> x >> y;
}
void sample ::putinfo()
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "sum = " << sum() << endl;
    cout << "diff = " << diff() << endl;
    cout << "mul = " << mul() << endl;
    cout << "div = " << div() << endl;
}
int sample::sum(){
    return (x+y);
}
int sample ::diff(){
    return (x-y);
}
int sample ::mul(){
    return (x*y);
}
float sample ::div(){
    return ((float)x/(float)y);
}
int main(){
    sample s;
    s.getinfo();
    s.putinfo();
    s.sum();
    s.diff();
    s.mul();
    s.div();
    return 0;
}
