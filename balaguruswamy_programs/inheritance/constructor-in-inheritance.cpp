#include<iostream>
using namespace std;
class alpha
{
    int x;
    public:
    alpha(int i)
    {
        x=i;
        cout<<"alpha constructed"<<endl;
    }
    void show_x()
    {
        cout<<"x = "<<x<<endl;
    }

};
class beta
{
    float p,q;
    public:
    beta(float a,float b): p(a),q(a+b)
    {
        cout<<"Beta constructed"<<endl;
  }
  void show_pq()
  {
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;
  }
};
class gamma:public beta , public alpha
{
    int u,v;
    public:
    gamma(int a,int b, float c ): 
     alpha(a*2),beta(c,c),u(a)
    {
        v=b;
        cout<<"Gamma constructed "<<endl;
        }
    void show_uv()
    {
        cout<<"u = "<<u<<endl;
        cout<<"v = "<<v<<endl;
    }

};
int main()
{
    gamma g(2,4,2.5);
    g.show_x();
    g.show_pq();
    g.show_uv();
    return 0;
}