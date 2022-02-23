#include<iostream>
#include <cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
string month1, month2, month3;
double rain1, rain2, rain3;
double average;

cout << "Enter the name of the month: ";
cin >> month1;
cout << "Enter the rainfall in inches ";
cin >> rain1;
cout << "Enter the name of the month: ";
cin >> month2;
cout << "Enter the rainfall in inches ";
cin >> rain2;
cout << "Enter the name of the month: ";
cin >> month3;
cout << "Enter the rainfall in inches ";
cin >> rain3;

average = (rain1 + rain2 + rain3) / 3;

cout << setprecision(2) << fixed;
cout << "The average rainfall for " << month1 << ", "
<< month2 << ", and " << month3 << " is: " << average << endl << endl;

return 0;
}