#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please Enter three Numbers "<<endl;
    cin>>a>>b>>c;
    if (a > c)
   swap(a, c);
   if (a > b)
   swap(a, b);
    if (b > c)
   swap(b, c);
   cout<<"The Maximum is "<<c<<endl;
   cout<<"The Middle is "<<b<<endl;
   cout<<"The Minimum is "<<a<<endl;


    return 0;
}