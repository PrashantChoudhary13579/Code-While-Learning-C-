// A program to demonstrate the writing of a set of lines to a specified file, namely "text.dat"
#include<fstream>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("text.txt");
    outfile<<"This is a test "<<endl;
    outfile<<"Program to store "<<endl;
    outfile <<"a set of lines onto a file "<<endl;
    outfile.close();
    return 0;
}