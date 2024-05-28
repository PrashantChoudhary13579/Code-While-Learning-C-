/* A program to demonstrate how to define both data members and member function of a class within the scope 
of the class definition.
*/
#include<iostream>
using namespace std;
class date{
    int day;
    int month;
    int year;
    public:
    void getdata();
    void putdata();
};
void date::getdata(){
    cout<<"Enter the day , month and year"<<endl;
    cin>>day>>month>>year;
    
}
void date::putdata(){
    cout<<"Today's Date is - "<<day<<" / "<<month<<" / "<<year;

}
int main(){
    class date t;
    t.getdata();
    t.putdata();
    return 0;
}