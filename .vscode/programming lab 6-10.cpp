#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 

void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}

void swap(int &A, int &B, int &C)
{
    int min = (A<B) ? A : B;
    min = (C < min) ? C : min;
    int max = (A>B) ? A : B;
    max = (C > max) ? C : max;

    int remainder = (A == min || A == max) ? ((B == min || B == max) ? C : B) : A;
    A = min;
    B = remainder;
    C = max;
}
void swap(int &A, int &B, int &C, int &D)
{
    int oldA = A;
    A = B;
    B = C;
    C = D;
    D = oldA;
}

int main()
{

    int A = 5, B = 9, C = -4, D = 84;
     swap(A, B);
    cout<<A, B;
    swap(A, B, C);
    cout<< A, B, C;  
    swap(A, B, C, D);
    cout<< A, B, C, D;
    return 0;
}