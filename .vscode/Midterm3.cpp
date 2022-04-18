#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;

int getRdnum()

{
    srand(time(0));
    cout<<rand()%50+1;
}