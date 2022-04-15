#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;



void getRandnum(int n1, int n2, int n3);
// In this function, generate three random numbers and assign the values to the parameter n1, n2, and n3
{
    n1=rand();            
    n2=rand();           
    n3=rand();            
}

int  findMin(int n1, int n2, int n3); 
// The return value : the min among n1, n2 and n3.
{
    if(n1<n2 && n1<n3)              
    return n1;
    if(n2<n3 && n2<n1)              
    return n2;

    return n3;                    
}

void printResult(int n1, int n2, int n3, int min);
// Print out the results with the original numbers and the minimum value
{

    cout<<"Three random numbers: "<<n1<<" "<<n2<<" "<<n3<<endl;
    cout<<"The minimum of these numbers is: "<<min<<endl;
}

int main ()
{
// In main( ), call the functions 
	int n1,n2,n3,min;
getRandnum(n1, n2, n3);
min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);
}