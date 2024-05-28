#include<iostream>
using namespace std;
class matrix{
    int **p;    //Pointer variable  to the matrix 
    int d1,d2;  // variables of integer data type 
    public:
    matrix(int x,int y);    // parametraized constructor with two arguments  //defining the constructor
    void getdata(int i,int j, int value)// getdata member function for taking the values int p , void  is used as a return type means it will return a void (nothing)
    {
        // cin>>value;
        p[i][j]=value;

    }
    int & putdata(int i, int j) // it is named as putdata as a member function having two arguments , and it will return the p int which is a pointer so the return type includes & and which is integer
    {
        return p[i][j];
    }

};
matrix::matrix(int x, int y) // Declaration of the constructor 
{
    d1=x; // giving values of x int d1
    d2=y; // giving values of y int d2
    p=new int *[d1]; 
    for(int i=0; i<d1;i++)
    {
        p[i]= new int[d2];
    }
}
int main()
{
    int m, n;
    cout<<"Enter the rows and columns of the matrix "<<endl;
    cin>>m>>n;
    matrix A(m,n);
    cout<<"Enter matrix elements row by row "<<endl;
    int i, j, value;
    for(i=1;i<=m;i++)
    {
        for (int i = 1; i <= n; i++)
        {
            // p[i][j]=value;//d
            cin>>value;
            A.getdata(i,j,value);
        }
        cout<<endl;
    }
    cout<<A.putdata(2,3);
    return 0;
}