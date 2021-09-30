#include<iostream>
using namespace std;

bool hasDigit(string txt){
int br=0;
	for(int i=0;i<txt.length();i++)
	{
		if(txt[i]>47&&txt[i]<59)
			br++;
		
	}
  if(br!=0)
	{
		return true;
	}else
		return false;
}

int main(){

    cout<<"If ressult is one string has number else it will show 0:"<<hasDigit("Helloo");
    return 0;
    cout<<hasDigit("dfjk9");



}