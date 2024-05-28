//if we do not define the default constructor then it will give any garbage value. 
#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
        point ()
        {
            // x=0;
            // y=0;
        }
        point(int a,int b)//parameterized constructor
         {
            x=a;
            y=b;

        }
        void display(void)
        {
            cout<<"The value of x = "<<x<<endl;  
            cout<<"The value of y = "<<y<<endl;
        }

};
int main()
{
    point p1,p2(3,5);
    cout<<"For p1 "<<endl;
    p1.display();
    cout<<"For p2 "<<endl;
    p2.display();
    return 1;
}