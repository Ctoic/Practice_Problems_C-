#include<iostream>
using namespace std;

int main()
{
    char name='n';
    char *C=&name;

    cout<<name<<endl;
    cout<<*C<<endl;
    cout<<"Mmory location for variaable is ::"<<C<<endl;

    *C='a';
    cout<<"After change :"<<*C<<endl;
    cout <<C<<endl;
    



    return 0;

}