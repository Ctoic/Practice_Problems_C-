#include<iostream>
using namespace std;

int main()
{


char name='n';
    char *c;
    c=&name;

    cout<<"The location of char  is :"<<&name<<endl;
    cout<<"the value stored within the variable is:"<<*c<<endl;

    cout<<"The location of next box of memory for char:"<<c+1<<endl;
    cout<<"Garbage value at that box is :"<<c+1<<endl;

    void *p0;
    p0=c;

    cout<<"The void pointer type:"<<p0<<endl;
    // void *p0=3;
    // cout<<p0<<endl; type integer cannot be assign to void entity
    // cout<<p0+1 is also not possible for void datatpe





    return 0;
}

