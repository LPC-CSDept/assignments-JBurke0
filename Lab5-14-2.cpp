#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
   int num;
   int count=0;
   int sum=0;
   int min=1000000;
   int max=0;
   float avg;
     ifstream file("random.txt");
             file>>num;
     while(!file.eof()){
       count++;
           sum=sum+num;
       if(num>max){
           max=num;
       }
       if(num<min){
           min=num;
       }
       file>>num;  
   }
   file.close();

   cout<<"Total Number of Integers read are: "<<count<<endl;
   cout<<"Minimum value: "<<min<<endl;
   cout<<"Maximum value: "<<max<<endl;
   cout<<"Total sum of integers:"<<sum<<endl;
   avg=sum/count;
   cout<<"Average: "<<avg<<endl;