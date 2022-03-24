#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
int inputValidate(int,int);
void getListprime(int,int);

int main ()
{
    int begin,end;
    int res;
    cout<<"Enter two inputs"<<endl;
    cin>>begin>>end;

    res=inputValidate(begin,end);
    if(!res)
        exit(0);

        getListprime(begin,end);
        ]