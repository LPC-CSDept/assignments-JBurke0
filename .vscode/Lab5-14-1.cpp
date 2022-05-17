#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
      srand(time(0));
   int N;
   ofstream file("Random.txt");
   cout <<"Enter number of Integers to write: ";
   cin>>N;
   int i;
   for(i=0;i<N;i++){
   file<<rand()%100<<endl;  
   }
   file.close();
}
