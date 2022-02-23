#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include<iomanip>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{
   float total;
   srand(time(0));

	float i;

	i = rand() % 100 ;

	cout << i << endl;

    float x;

	x = rand() % 100 ;

	cout << x << endl;

      float y;

	y = rand() % 100 ;

	cout << y << endl;

    cout<<"Enter values of i,x,y for summation"<<endl;

    total=(i+x+y);
    cout<< setprecision(2)<<fixed;
    cout<< total <<endl;
    return 0;
    
}