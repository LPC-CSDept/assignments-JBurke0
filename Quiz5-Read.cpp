#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream 	ifs;
	int 		EmployeeID;
	string 		Name;
	string		Department;
	double 		Salary;
	
	
	ifs.open("EmployeeRecord.txt");
	if (!ifs)
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	ifs >> EmployeeID;

	
	for(int i=0; i<EmployeeID; i++){
		ifs >> Name >> Department >> Salary;
		
	
		cout << EmployeeID << "\t" << Name << "\t" << Department<<"\t"<<Salary << endl;
	
	}
	