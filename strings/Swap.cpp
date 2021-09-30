#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout<<"enter number you want to swap:"<<endl;
    cin>>num1>>num2;

    cout<<"Before swaping :"<<"value of A is:"<<num1 <<"Value of B is :"<<num2<<endl;

    num1=num1+num2;         // Simple maths is used
    num2=num1-num2;        //let num1=2 num2=3 
    num1=num1-num2;      //num1+num2=5; num2=5-3; num2=2; num1=5-2; num1=3

    cout<<"numbers after swaping are:"<<"value of A is :"<<num1<<"value of B is :"<<num2<<endl;
    return 0;


}