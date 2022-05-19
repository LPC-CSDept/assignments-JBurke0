#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
int inputValid(int, int);
void getListPrime(int, int);

int main()
{

	int begin, end, ret;
	cin >> begin >> end;
	
	ret = inputValid(begin, end );
	if ( ret == 0 )
	{
		cout << "Input is not valid\n";
		exit(0);
	}

	getListPrime(begin, end);

}

int inputValid(int b, int e)
{
	if (( b < 0 ) || (e < 0) || (b > e))
		return 0;
	else 
		return 1;
}

void getListPrime(int b, int e)
{
	for(int i=b; i<e; i++)
	{
		cout << i << endl;		
	}
	cout << "Your resposibility to implement this part\n";
}