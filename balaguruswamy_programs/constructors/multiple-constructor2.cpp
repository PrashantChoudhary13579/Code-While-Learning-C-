// Using the constructor overloading write a program to add two complex numbers
#include<iostream>
using namespace std;
class complex
{
    private:
        float a,b;
    public:
        // void input(void)
        // {
        //     cout<<"Enter the complex number "<<endl;
        //     cin>>a>>b;
        // }
        void output(void)
        {
            cout<<" "<<a<<" + i"<<b;

        }
        complex ()
        {

        }
        complex (float x)
        {
            a=x;
            b=x;
        }
        complex (float x,float y)
        {
            a=x;
            b=y;
        }
        friend complex sum(complex ,complex);
        friend void show (complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a +c2.a;
    c3.b=c1.b +c2.b;
    return c3;

}
// complex show(float x)
// {
//     cout<<" "<<c3;
//     }
int main()
{
    complex c3;
    complex c1(2.5);
    complex c2(3.4,6.5);
    c3=sum(c1,c2);
    c1.output();cout<<endl;
    c2.output();cout<<endl;
    c3.output();cout<<endl;
    
}