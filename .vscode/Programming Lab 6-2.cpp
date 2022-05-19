#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    int n;
    cout<<"Enter you input\n";
    cin>>n;

    if(n>0)
    result=nthpowerp(n);
    else if (n<0)
    result=nthpower(n);
    else
    result=1;
    printout(result);
}
double nthpowern(double x)
{
    int p=1;
    for(int i=1;i<=a;i++)
    p=p*2;
    cout<<p<<endl;
    return p;
}
double nthpowern(double y)
{
    int f=nthpowerp(y);
    int h=1/2;
    cout<<h<<endl;
    return h;
}
double print(double z)
{
    cout<<"result is"<<z<<endl;
    return 0;
}