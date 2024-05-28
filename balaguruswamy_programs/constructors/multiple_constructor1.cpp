//Problem - int main contain two part ,first is not working while second is working (in book pg-134 ) 
#include<iostream>

using namespace std;

    class complex{
        float x,y;
        public:
            complex()
            {
                x=0;y=0;
            }    //default constructor with no arguments
            complex(float a)        //parameterized constructor with one arguments
            {
                x=a;
                y=a;

            }
            complex(float a,float b)        //parameterized constructor with two arguments
            {
                x=a;
                y=b;
            }
            friend complex sum(complex,complex);        //friend function declaration
            friend void show (complex);
 };
            complex sum(complex c1,complex c2)      //friend function definition
            {
                complex c3;
                c3.x=c1.x+c2.x;
                c3.y=c1.y+c2.y;
                return c3;

            }
            void show (complex c3)
            {
                // complex c3;
                cout<<c3.x<<" + i("<<c3.y<<")"<<endl;
            }
int main(){
    complex c1(2.3,3.5);
    complex c2( 9.3);
    complex c3;
    c3=sum(c1+c2);
    cout<<"C1= ";show(c1);
    cout<<"C2= ";show(c2);
    cout<<"C3= ";show(c3);

    //Another method of main function to run the same class

    // complex P,Q,R;
    // P=complex(2.5,4.4);
    // Q=complex(9.8,6.4);
    // R=sum(P,Q);
    // cout<<endl;
    // cout<<"P = ";show (P);
    // cout<<"Q = ";show (Q);
    // cout<<"R = ";show (R);
    return 0;
}