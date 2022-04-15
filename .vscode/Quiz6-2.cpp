#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

void gerRandnum(int &n1, int &n2, int &n3);
// In this function, generate three random numbers and assign the values to the parameter n1, n2, and n3
{
    n1=rand();            
    n2=rand();           
    n3=rand();            
}
int  findMin(int n1, int n2, int n3); 
// The return value : the min among n1, n2 and n3.
int  findMin(int n1, int n2, int n3)
{
    if(n1<n2 && n1<n3)              /
    if(n2<n3 && n2<n1)              //if n2 is minimum then returning n2
   

    return 0;                      //if n3 is minimum then returning n3
}
void printResult(int n1, int n2, int n3, int min);
// Print out the results with the original numbers and the minimum value

// In main( ), call the functions 
getRandnum(n1, n2, n3);
min = findMin(n1, n2, n3);
printResult(n1, n2, n3, min);
