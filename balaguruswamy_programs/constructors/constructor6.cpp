/*      Write a program to simulate a simple banking system in which the initial balance and the rate of interest are
        read from the keyboard and these values are initialised using the constructor member function . The program
        consists of the following methods :
        1. to initalise the balance amount and the rate of interest using the constructor member function
        2. To make a deposit
        3. To withdraw an amount from the balance
        4. To find the compound interest based on the rate of interest
        5. To display the menu option.*/
#include <iostream>

using namespace std;

class account
{
    float balance;
    float rate;

public:
    account();
    void deposit();
    void withdraw();
    void compound();
    void getbalance();
    void menu();
};
account ::account() // Applying the default constructor
{
    cout << "Enter the initial amount" << endl;
    cin >> balance;
    cout << "Enter the rate " << endl;
    cin >> rate;
}
void account::deposit() // Similar code of adding the two numbers
{
    float amount;
    cout << "Enter the amount you want to deposit" << endl;
    cin >> amount;
    balance = balance + amount;
}
void account::withdraw() // Applying a check if yes than cut else do nothing
{
    float amt;
    cout << "How much to withdraw ?" << endl;
    cin >> amt;
    if (amt <= balance)
    {
        balance = balance - amt;
        cout << "amount drawn = " << amt << endl;
        cout << "current amount = " << balance << endl;
    }
    else
        cout << "Input is invalid";
}

void account::compound() // finding the interest from the rate and then adding to the balance for total
{
    float interest;
    interest = balance * rate;
    balance = balance + interest;
    cout << "interest amount = " << interest << endl;
    cout << "total amount = " << balance << endl;
}
void account::getbalance() // for checking the balance at every action
{
    cout << "Current balance = " << balance << endl;
}
void account::menu() // Applying the menu for showing us the action
{
    cout << "d-> deposit" << endl;
    cout << "w-> withdraw" << endl;
    cout << "c-> compound interest" << endl;
    cout << "g-> get balance " << endl;
    cout << "q-> quit " << endl;
    cout << "m-> menu " << endl;
    cout << "Option,please ?" << endl;
}

int main()
{
    class account acc;              //  creating an object of class account
    char ch;                        // creating a variable of data type character
    acc.menu();                     // applying menu function of object acc
    while ((ch = cin.get()) != 'q') // appllying the switch case
    {
        switch (ch) //
        {
        case 'd':
            acc.deposit();
            break;

        case 'w':
            acc.withdraw();
            break;

        case 'c':
            acc.compound();
            break;

        case 'g':
            acc.getbalance();
            break;

        case 'm':
            acc.menu();
            break;

        default:
            break;
        } // end of the switch case statement
    }
    return 0;
}