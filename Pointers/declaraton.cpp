#include<iostream>
using namespace std;

int main ()
{
    // int num=5;
    // int *p;
    //  p=&num;

    // double num2=204394934;
    // double *b;
    // b=&num2;
    // cout<<b<<endl;


    // cout<<*b<<endl;

    int a =20;
    int *p;

    p=&a;
    cout<<"value before derefrencing"<<*p<<endl;// printing value
     cout<<p<<endl; //printing the address
   
    *p=30;

    cout<<"Value after derefrencing:"<<*p<<endl;
    // Defrencing means changing the value of varianle using pointer which is pointing towords the variable
    cout<<&a<<endl;

    // Now Pointers arithematics
    cout<<p<<endl;
    cout<<"The size of memory for integer:"<<sizeof(int)<<endl;
    cout<<"Lo of next memory location"<<p+1<<endl;
    

    char *p0;
    p0=(char*)p;

    cout<<p0<<endl;



   




   
    // cout<<p<<endl;
    // cout<<&num<<endl;


    // cout<<*p<<endl;
    // cout<<num<<endl;
    

    

    return 0;



}