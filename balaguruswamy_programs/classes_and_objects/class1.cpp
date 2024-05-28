// A program to assign the values of the data members of a class such as day , month , year
// and display the contents of the screen.
#include<iostream>
using namespace std;
class date{
        public:
        int day,month,year;
    };
int main()
{
    
    class date today;
    today.day=25;
    today.month=4;
    today.year=2024;
    cout<<"Today's date is = "<<today.day<<endl;
    cout<<"Today's month is = "<<today.month<<endl;
    cout<<"Today's Year is = "<<today.year<<endl;
    cout<<"Can be written as - "<<today.day<<" / "<<today.month<<" / "<<today.year<<endl;
    return 0;
}