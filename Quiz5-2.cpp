#include <iostream>
using namespace std;

int main()
{
float base,power,result=1;
cout<<"Enter the base"<<endl;
cin>>base;
cout<<"Enter to the  power of"<<endl;
cin>>power;
while(power!=0&&power<10)
{
	result*=base;
	--power;
}
cout<<result;
}