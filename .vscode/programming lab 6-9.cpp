#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 

#include<iostream> 
using namespace std;

int getinput(int &, int &, int &);

int maxmin(int num1, int num2, int num3, int& max, int& min)
{
    min = (num1<num2) ? num1 : num2;
    min = (num3 < min) ? num3 : min;

    max = (num1>num2) ? num1 : num2;
    max = (num3 > max) ? num3 : max;

    return max - min;
}

int main()
{
    int num1, num2, num3;
    int max, min;
    getinput(num1, num2, num3); 
    maxmin(num1, num2, num3, max, min);
    cout << "The gap between " << max << " and " << min <<": " << max-min << endl;

    return 0;
}



int getinput(int &num1, int &num2, int &num3)
{
    num1 = 7;
    num2 = 6;
    num3 = 5;

    return 3;
}