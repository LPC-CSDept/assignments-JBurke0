#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
	const int originalprice = 99;
	const double 	Perc20 = 20.0;
	const double 	Perc30 = 30.0;
	const double 	Perc40 = 40.0;
	const double 	Perc50 = 50.0;
	double drate, originalamount, discountamount, salesprice;
	int numofsold;

	cout << "Enter the number of sold : " ;
	cin >> numofsold;

	if ( numofsold < 0 )
		exit(0);
	
	// num of sold >= 0 
	if ( numofsold >= 100)
		drate = Perc50;
	else if ( numofsold >= 50)
		drate = Perc40;
	else if ( numofsold >= 20)
		drate = Perc30;
	else	// 0 <= numofsold < 20 
		drate = Perc20;
			
	
	originalamount = originalprice * numofsold;
	discountamount = originalamount * drate; 
	salesprice = originalamount - discountamount; 

	cout <<"The Original Amount:"<< originalamount <<endl;
    cout<<"The Discount:" <<discountamount << endl;
    cout<<"THe Sales Price:"<<salesprice << endl;


}
