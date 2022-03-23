#include <iostream>
using namespace std;

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

		{
		cout << "Enter the user input: ";
		cin >> input;
		if ( (i == 0) || (min > input) )
			min = input;
	}
	cout << " Minimum value of input is " << min << endl;
}