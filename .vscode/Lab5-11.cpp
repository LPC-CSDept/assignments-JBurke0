#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{

int flag ;

for(int current_num=1;	current_num<=100; current_num++) 
{
	flag = 0;
	for(int i=2;i<=current_num/2;i++)
	{
		if ( current_num % i == 0)
		{
			flag = 1;
			break;
		}

	}
	if ( flag )
		cout << current_num << " Is not a prime number " << endl;
	else
		cout << current_num << "Is a prime number " << endl;
}

}
