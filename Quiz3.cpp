#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{ 
    cout<<fixed<<setprecision(5);
    double total;
   srand(time(0));

	double i;

	i = rand();

	cout << i << endl;

    double x;

	x = rand();

	cout << x << endl;

      double y;

	y = rand();

	cout << y << endl;

    
    total=(i+x+y);

    cout << total; 
}
   