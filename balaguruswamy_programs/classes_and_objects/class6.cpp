/* A program to find the area of a circle whose radius is given as input using an oops techinque.*/
#include <iostream>

using namespace std;
const float pi=3.14;
class circle
{
    float r, a;

public:
    void getinfo();
    void display();
    float area();

};
void circle::getinfo(){
    cout<<"Enter the radius of the circle "<<endl;
    cin>>r;
}
void circle::display(){
    cout<<"Area of the circle = "<<area()<<endl;
}
float circle::area(){
   return  pi*r*r;
}

int
main()
{
    circle c;
    c.getinfo();
    c.display();
    c.area();

    return 0;
}