#include<iostream>
using namespace std;

int main()
{
    int num=1025;
    int *p;
    p=&num;

    cout<<"Size of int :"<<sizeof(int)<<endl;
    cout<<"The memory address :"<<p<<"The value stored is :"<<*p<<endl;
    char *p0;
    p0=(char*)(p);
    cout<<"The size of char datatype:"<<sizeof(char)<<endl;
    cout<<"The memory address :"<<p0<<"The value stored is :"<<*p0<<endl;
    char name='n';
    char *c;
    c=&name;

    cout<<"The location of char  is :"<<c<<endl;
    cout<<"the value stored within the variable is:"<<*c<<endl;

    cout<<"The location of next box of memory for char:"<<c+1<<endl;
    cout<<"Garbage value at that box is :"<<c+1<<endl;







    return 0;

}