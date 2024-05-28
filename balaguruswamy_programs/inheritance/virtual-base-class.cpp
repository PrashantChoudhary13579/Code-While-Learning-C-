#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number()
    {
        cout << "Roll number = " << roll_number << endl;
    }
};
class test : virtual public student
{
protected:
    float sub1, sub2;

public:
    void get_marks(float x, float y)
    {
        sub1 = x;
        sub2 = y;
    }
    void putmarks()
    {
        cout << "Marks in sub1 = " << sub1 << endl;
        cout << "Marks in sub2 = " << sub2 << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void get_score(float a)
    {
        score = a;
    }
    void put_score()
    {
        cout << "Score obtained in sports : " << score << endl;
    }
};
class result: public test, public sports
{
    float total ;
    public:
    void display();
};
void result :: display()
{
    total = sub1 +sub2  +score;
    put_number();
    putmarks();
    put_score();
    cout<<"Total Marks = "<<total<<endl;
}
int main()
{
    result s1;
    s1.get_number(23);
    s1.get_marks(55.0,67.5);
    s1.get_score(30);
    s1.display();
    return 0;
}