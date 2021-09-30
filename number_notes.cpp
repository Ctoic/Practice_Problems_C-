#include<iostream>
using namespace std;

int main()
{
    int amount;
    int R500,R100,R50,R20,R10,R5,R1;

    cout<<"Enter amount:"<<endl;
    cin>>amount;

    R500=amount/500;     // This will provide us number of notes
    amount=amount%500;    //while this will provide the new amount

    R100=amount/100;
    amount=amount%100;

    R50=amount/50;
    amount=amount%50;

    R20=amount/20;
    amount=amount%20;

    R10=amount/10;
    amount=amount%10;

    R5=amount/5;
    amount=amount%5;

    R1=amount/1;


    cout<<"Rs 500:  "<<R500<<"  Rs 100   "<<R100<<"   Rs 50:"<<R50<<"  Rs 20  "<<R20<<"  Rs 10"<<R10<<"   Rs 5    "<<R5<<"     R1 : "<<R1<<endl;



    return 0;


}