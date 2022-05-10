#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;
int main(){
const int N=10;
int part1,part2;
int number[N]={10,15,0,-25,19,20,25,30,45,20};
 
 part1=findMax(number,0,N/2-1);
part2=findMax(number,N/2,N-1);
cout <<"Largest number from the first half: ",<< part1 <<endl;
cout <<"Largest number from the first half :  ",<< part2 <<endl;
 return 0;
}