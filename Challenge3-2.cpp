#include<iostream>

using namespace std;
int main()
{

int numberMale;
int numberFemale;

cout<< "Enter number of Male";
cin>> numberMale;

cout<< "Enter number of Female";
cin>> numberFemale; 

total=(numberMale+numberFemale);

double PercentMale;
double PercentFemale;

PercentMale=(numberMale/total);
cout<< "Percent male of the class" << PercentMale<<endl;

PercentFemale=(numberFemale/total);
cout<< "Percent female of the class" << PercentFemale<<endl;


}