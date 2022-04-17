#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;
int getRdnum(){
   srand ( time(0) );
   return rand() % 101;
}

}
int getRdnum(int n1){
   srand ( time(0) );
   return rand() % (101-n1)+n1;
}
int getRdnum(int n1,int n2){
   srand ( time(0) );
   return rand() % (n2-n1)+n1;
}