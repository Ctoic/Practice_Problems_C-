#include<iostream>
using namespace std;

int main()
{
    int a , b , c;

    cout<<"Enter three numbers I will add and find avearge:"<<endl;
    cin>>a>>b>>c;

    int sum = a+b+c;
    float average = sum/3;


    cout<<"sum of the three numbers is :"<<sum<<endl;
    cout<<"Average of the three number is :"<<average<<endl;

    return 0;
    
}