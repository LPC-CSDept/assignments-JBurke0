#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;

const  int N=5, M=5;
    int     i, j;
    for(i=0;i<N;i++) {
        for(j=i; j<M-i; j++)
            cout << " (" << i << "," << j << ") " ;
        cout << endl;
    }