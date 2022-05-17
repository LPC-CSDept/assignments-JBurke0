#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;


void lower(int row, int col)
{
int i, j;
for (i = 0; i < row; i++)
	{
for (j = 0; j < col; j++)
			{
if (i < j)
{

}
else
cout << i<<","<<j<<endl;
			}

	}
}
void upper(int row, int col)
{
int i, j;

for (i = 0; i < row; i++)
	{
for (j = 0; j < col; j++)
		{
if (i > j)
{
}

else
cout << i<<","<<j <<endl;
		}

	}
}

int main()
{

int row = 3, col = 3;

cout << "Lower triangular matrix index"<<endl;
lower(row, col);

cout << "Upper triangular matrix index " <<endl;
upper(row, col);

return 0;
}
