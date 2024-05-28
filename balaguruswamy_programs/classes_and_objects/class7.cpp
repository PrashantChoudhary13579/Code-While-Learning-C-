// Finding the sum of the series 
//Sum of 1 +2 +3+ .....+n
#include<iostream>
using namespace std;
class series{
    int n,s;
    public: 
    int sum(int n);  
};
int series::sum(int n){
    int temp=0;
    for (int i = 0; i <= n; i++)
    {
        // temp +=i;
        temp=temp+i;
    }
    return (temp);
    
}
int main()
{
    int n;
    series s;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int total=s.sum(n);
    cout<<"Summing of the series"<<endl;
    cout<<"1+2+3+....+"<<n<<" = "<<total;
    cout<<endl;
    return 0;
}
