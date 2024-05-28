/* A program to find the sum of the following series using oop technique.
sum = 1+2+3+4+5+...+n*/
#include<iostream>

using namespace std;

    class series{
        int n,s;
        public: 
        void input(){
            cout<<"Enter the value of n "<<endl;
            cin>>n;
            
        }
        void output(){
            cout<<"The series - 0 + 1 + 2 + ..... + n = "<<s<<endl;
            // cout<<""/
        }
        int sum(int n){
            int s=0;

            for (int i = 1; i < n; i++)
            {
                s=i+s;
                // cout<<" + "<<s;
                // return n; 
                return s;
            }
                cout<<s<<endl;

            
        }
    };
int main(){
    series s;
    s.input();
    s.output();
    s.sum();
    return 0;
}