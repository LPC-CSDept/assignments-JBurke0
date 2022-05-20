#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 


#include<iostream> 
using namespace std;

int&retaddr()
{
    static int x=10;
    return x;
}
int main()
{
    retadr()=30;
    cout<<retaddr()<<endl;
    return 0;
}
//It Will change the value of static variable of retaddr .It will return 30.