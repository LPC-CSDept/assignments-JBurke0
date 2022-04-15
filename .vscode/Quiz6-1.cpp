#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>

using namespace std;

void swapTwoValues(int*n1, int*n2);
void swapTwoValues(float*f1, float*f2);


int main() {
	

        int a[5] = {1,2,3,4,5};
        swapTwoValues(&a[2], &a[3]);

        for(int i=0;i<5;i++)
        {
                cout<<a[i]<<endl;
        }


        float b[5] = {5,4,3,2,1};

        swapTwoValues(&b[2],&b[3]);

                for(int i=0;i<5;i++)
                {
                cout<<b[i]<<endl;
        }

        return 1;
}

void swapTwoValues(int n1, int n2) {

        int var = n1;
        n1 = n2;
        n2 = var;
}

void swapTwoValues(float f1, float f2) {

        float var = f1;
        f1 = f2;
        f2 = var;

}
