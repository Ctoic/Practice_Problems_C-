#include<iostream>
using namespace std;

int main()
{
    int year;


    cout<<"Enter year"<<endl;
    cin>>year;


    if (year%4==0)
    {
        if (year >2021)
        cout<<"it will a leap year"<<year<<endl;
        else{
            cout<<"it was a leap year"<<endl;
            
        }

    }
    else
    {
        cout<<"it is a regular year"<<endl;

    }

    return 0;

}