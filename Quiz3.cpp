#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{ 
    cout<<setprecision(5);
    double total;
   srand(time(0));

	double i;

	i = rand();

	cout << "i="<<i << endl;

    double x;

	x = rand();

	cout << "x="<<x << endl;

      double y;

	y = rand();

	cout <<"y=" <<y << endl;

    
    total=(i+x+y);

    cout <<"i+x+y=" <<total<<endl; 
}
   