// A program to solve a quadratic equation using an oop technique
#include <iostream>
#include <cmath>
using namespace std;

class equation
{
private:
    float a, b, c;

public:
    void getinfo(float x, float y,float z);
    void display();
    void equal(float a,float b);
    void imag();
    void real(float a,float b,float c);

};
void equation::getinfo(float x, float y , float z)
{
    a=x;
    b=y;
    c=z;

}
void equation::display(){
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
void equation::equal( float a, float b){
    float s;
    s= -b/(2*a);
    cout <<"Roots are equal = "<<s<<endl;
}
void equation::imag()
{
    cout<<"The roots are imaginary."<<endl;
}
void equation::real(float a,float b,float det){
    float x1,x2 ,temp;
    temp=sqrt(det);
    x1=(-b+temp)/(2*a);
    x2=(-b-temp)/(2*a);
    cout<<"The roots are real and unique "<<endl;
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;


}
int main()
{
    class equation equ;
    float a,b,c;
    cout<<"Enter the values of a,b,c "<<endl;
    cin>>a>>b>>c;
    equ.getinfo(a,b,c);
    equ.display();
    if(a==0){
        float temp;
        temp=-c/b;
        cout<<"The linear roots is "<<temp<<endl;
    }
    else{
        float det;
        det=b*b-4*a*c;
        if(det==0)
        equ.equal(a,b);
        else if(det<0)
        equ.imag();
        else 
        equ.real(a,b,det);
    }
    return 0;
}