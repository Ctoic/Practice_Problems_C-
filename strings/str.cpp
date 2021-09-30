#include<iostream>
using namespace std;

int sum(int a ,int b)
{
    return a+b;

}

int str_sum(char a, char b)
{
    return a+b;

}
int main()
{
    cout<<sum(2,4);
    cout<<str_sum('hello','world');

    return 0;


}