#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;

const int N=10;
int main(){
int number[10] = {10,15,0,-25,19,20,25,30,45,20};
for (int i=0;i<N,i++){
    if(i==0 && i+1<N){
        if(abs(number[i]-number[i--])<10){
            cout<<number[i]<<endl;
        }
    }else if(i==N-1 && i>0){if abs(number[i]-number[i--]<10)}{
        cout<<"Index:"<<number[i]<<endl;
    }
    else if(  |number[i] - number[i-1]|  < 10  &&
 |number[i] - number[i+1]|  < 10  )
 cout<<number[i]<<endl;
}
return 1;
}
      