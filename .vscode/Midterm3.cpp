#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;

int getRdnum()

{
    srand(time(0));
    cout<<rand()%50+1=i;
}


int isGreater(int N)

{
   for (int i < N )
srand(time(0));
    cout<<rand()%50+1=N; 
    {
        if (i<N)
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
int N;
  for (int i = 0; i < N; i++)

    {
        int num = getRdnum();
        if (isGreater(num))
            output << num <<endl;
    }

    output.close();
}