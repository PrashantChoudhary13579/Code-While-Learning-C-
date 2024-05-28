/*      Write a program to simulate a simple banking system in which the initial balance and the rate of interest are 
        read from the keyboard and these values are initialised using the constructor member function . The program 
        consists of the following methods :
        1. to initalise the balance amount and the rate of interest using the constructor member function 
        2. To make a deposit 
        3. To withdraw an amount from the balance 
        4. To find the compound interest based on the rate of interest 
        5. To display the menu option.*/

#include<iostream>

using namespace std;

    class bank{
        private:
            float balance, interest, year;
        public:
            account();
            void deposit();
            void withdraw();
            void compound();
            void menu();
    };
    bank ::account()
    {
        cout<<"Enter the Bank Balance "<<endl;
        cin>>balance;
        cout<<"Enter the interest "<<endl;
        cin>>interest;
        cout<<"Enter the no. of years "<<endl;
        cin>>year;
    }
    void bank ::deposit(){
        float amt;
        cout<<"Enter the amount you want to deposit"<<endl;
        cin>>amt;
        balance =balance+amt;
        cout<<"Amount credited = "<<amt<<endl;
        cout<<"Total Balance = "<<balance<<endl;
    }
    void bank::withdraw(){
         float amt;
          cout<<"Enter the amount you want to withdraw"<<endl;
        cin>>amt;
        balance =balance-amt;
        cout<<"Amount debited = "<<amt<<endl;
        cout<<"Total Balance = "<<balance<<endl;
    }
    void bank::compound(){
        float amt,compound ;
         compound=((100+interest)/100);
        for(int i=2 ; i<year ; i++)
        {
           compound =compound*compound;
        }
        amt=balance*compound;
        balance =balance +amt;
        cout<<"The compound interest = "<<amt<<endl;
        cout<<"Total Balance = "<<balance<<endl;
    }
    void bank::menu()
    {
        cout<<"1. Balance , interest , year input "<<endl;
        cout<<"2. Deposit "<<endl;
        cout<<"3. Withdrawl "<<endl;
        cout<<"4. Balance after applying compound interest "<<endl;
    }

    
int main(){
    bank b;
    b.menu();
    b.account();
    b.deposit();
    b.withdraw();
    b.compound();
    return 0;
}
        