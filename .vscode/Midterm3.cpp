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


int isGreater(int n)

{
   for (int i = 2; i < n / 2; i++)

    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()

{

    srand(time(0));

    ofstream output("numbers.txt");

    if (!output.is_open())
    {
        cout << "File Error"<<endl;
        return 0;
    }

