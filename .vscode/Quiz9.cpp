#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 

struct Employee

{
	int		id;
	string	fname;
    string lname;
	int 	salary[i];	
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
		while (ifs >> s.id >> s.fname >> s.lname>>s.deptName >> s.date )
		{
			
				ifs >> s.salary[i] ;
				printEmployee(s);
		
	}
}
{
	cout << "Employee ID : " << s.id << "\t"
		<< "First Name : " << s.fname << "\t";
        << "Last Name : " << s.lname << "\t";
	cout << "Salary: "<<"\t";
		cout << s.salary[i] << "\t";
	cout << "Department Name " << s.deptName << "\t";
    cout<<"Date"<<s.date<<endl;
}

if (s.salary <100000)
cout<<"Employee is in computer dept."<< endl;
