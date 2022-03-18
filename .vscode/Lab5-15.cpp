#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{
int guess;
guess=0;
guess++;
while (guess >=10);
{
       int random = rand() % 1000 + 1;
       cout << "Guess a number : ";
       cin >> guess;
       while (guess != random)
       {
          if (guess < random)
          {
            cout<< " Guess number too low, guess again " << endl;
          }
          else
          {
            cout << " Guess number too high, guess again " <<endl;
          }
          cin >> guess;
          if (guess==random)
          {
         	 cout << "Correct number, Winner" << endl;
          }

       }
}
}