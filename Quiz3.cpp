#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{ float total;
   srand(time(0));

	float i;

	i = rand();

	cout << i << endl;

    float x;

	x = rand() ;

	cout << x << endl;

      float y;

	y = rand();

	cout << y << endl;

    
    total=(i+x+y);
    cout << total; 
   