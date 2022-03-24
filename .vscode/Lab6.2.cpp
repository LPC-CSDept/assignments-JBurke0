#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your input"<<endl;
    cin>>n;

    if (n>0)
        result=nthpowerp(n);
        else if (n<0)
        result=nthpowern(n);
        else 
        result=1;
        printout(result);
        
}