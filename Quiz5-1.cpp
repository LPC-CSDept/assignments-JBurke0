#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
	  int num1, num2,num3,num4,num5;
		srand(time(0));

		num1 = rand() % 100 ;
		cout << num1 << endl;

		num2 = rand() % 100 ;
		cout << num2 << endl;


		num3 = rand() % 100 ;
		cout << num3 << endl;

		num4 = rand() % 100 ;
		cout << num4 << endl;


		num5 = rand() % 100 ;
		cout << num5 << endl;


			int 	min=0;
			int i;
num1,num2,num3,num4,num5=i;
			for(int i=0;i< 5; i++)
			{

				if ( (i == 0) || (min > num1)or(min>num2)or(min>num3)or(min>num4)or(min>num5) )

min =i;

			cout << " Minimum value of input is " << min << endl;
			}
}