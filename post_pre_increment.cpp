#include<iostream>
using namespace std;

int main()
{
    int a=9;
    int b=++a;

    int c=(a++);

    cout<<"preincrement is:"<<b<<endl;
    cout<<"postincrement is:"<<c<<endl;
    cout<<a<<endl;



    return 0;

}