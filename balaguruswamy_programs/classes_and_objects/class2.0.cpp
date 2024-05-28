/* A program to demonstrate how to define both data members and member function of a class within the scope 
of the class definition.
*/
#include<iostream>
using namespace std;
class date{
    int day,month, year;
    
    public:
    void getdata(int d,int m,int y){
        day=d;
        month=m;
        year=y;
    
}
    void putdata(void){
    cout<<"Today's Date is - "<<day<<" / "<<month<<" / "<<year;

}
};

int main(){
    class date t;
    int d1,m1,y1;
    d1=25;   
    m1=4;
    y1=2024;
    t.getdata(d1,m1,y1);
    t.putdata();
    return 0;
}