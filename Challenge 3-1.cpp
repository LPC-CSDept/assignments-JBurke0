#include<iostream>

using namespace std;
int main()
{

    int class A;
     int classB;
    int classC; 

int priceA = 15;
int priceB = 12;
int priceC = 9; 

cout<< "Enter number of tickets sold for Class A";
cin >> class A; 

cout<< "Enter number of tickets sold for Class B";
cin >> classB; 

cout<< "Enter number of tickets sold for Class C";
cin >> classC; 

total=( class A+priceA)+(classB+priceB)+(classC+priceC);
cout << "Total price for ticket sold" << total << endl;
}