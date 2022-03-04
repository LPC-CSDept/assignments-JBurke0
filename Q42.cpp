#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
int main()
{
  int i=0;
  double x, weight,cost,miles;
  cout<<"Enter number of miles "<<endl;
   cin>>miles;
   if (miles>10&&miles<3000)
   cout<< "Enter the weight of the package: "<<endl;
   cin>>weight;
   if (weight>0 && weight<20)
   i=miles/500;
   x=miles/500;
   if(x>0){
       i=i++;
   }
   if(weight<=2){
       cost=i*1.10;
   }else if(weight>2 && weight<=6){
       cost=i*2.20;
   }else if(weight>6 && weight<=10){
       cost=i*3.70;
   }else if(weight>10 && weight<=20){
       cost=i*4.80;
   }
   cout<<"Total Cost of Shipping" <<cost;
   return 0;
}