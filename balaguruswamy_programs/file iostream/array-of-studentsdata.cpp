// Entering the rollno., name , class of a student
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int rollno;
    char name[20];
    char clss;

    // ifstream infile("Data.txt");
    ofstream outfile("Data.txt");
    cout << "Enter the rollno., name , class of the student" << endl;
    cin >> rollno;
    cin >> name;
    cin >> clss;

    outfile << "Rollno. - " << rollno << endl;
    outfile << "Name - " << name << endl;
    outfile << "Class - " << clss << endl;

    outfile.close();

    ifstream infile("Data.txt");
    cout << "Rollno. - " << rollno << endl;
    infile >> rollno;
    cout << "Name - " << name << endl;
    infile >> name;
    cout << "Class - " << clss << endl;
    infile >> clss;
    infile.close();
}