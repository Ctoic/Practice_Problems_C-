#include<iostream>
using namespace std;
int main()
{
    int c=19;
    int *p;

    p=&c;
    int **q;
    q=&p;


    int ***r;
    r=&q;



    cout<<"memory location :"<<p<<endl;
    cout<<"memory location :"<<q<<endl;
    cout<<"memory location :"<<r<<endl;
    return 0;

}

