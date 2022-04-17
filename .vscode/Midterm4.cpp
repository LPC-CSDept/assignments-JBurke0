#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;
int getRdnum(){
   srand ( time(0) );
   return rand() % 101;
}