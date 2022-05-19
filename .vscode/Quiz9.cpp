#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 
const	int 	NUMCOURSE=2;
struct Employee
{
	int		id;
	string	fname;
    string lname;
	int 	salary[NUMCOURSE];	
	int		deptName;
	int		date;
};

void printEmployee(Employee s);
int main()
{
	Employee s;
	ifstream  ifs;
	ifs.open("Workers.txt");
	if (ifs) 
	{
		while (ifs >> s.id >> s.lname >> s.fname>>s.deptName >> s.date )
		{
			s.sum = 0;
			for(int i=0; i<NUMCOURSE; i++){
				ifs >> s.salary[i] ;
					
			printEmployee(s);
		}
	}
}