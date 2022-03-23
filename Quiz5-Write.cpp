#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream 	ofs;
    int 		EmployeeID;
	string 		Name;
	string		Department;
	double 		Salary;

	ofs.open("EmployeeRecord.txt");
	if (!ofs) 
	{
		cerr << "File open Error\n";
	
		exit(0);
	}
	
	cin >> Name;
	ofs << Name << endl; 

	for (int i=0; i<Name; i++){
		cin >>EmployeeID>> Name >> Department >> Salary ;
		ofs <<EmployeeID<< Name <<Department << Salary ; << endl;
	}
	ofs.close();
}