#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
const unsigned short N=5;
struct Scores{     
      double sc[N];     
      string grade;
};

struct Grade{    
      string first;    
      string last;   
      string ssn;   
      Scores score;

	ofstream ofs;
	
	ofs.open("grades.bin", ios::binary);

	student s1 ={"John", "Joan", 000-00-0001, "A"}; 	// student : data type, s1 : variable 
	student s2 ={"Bob", "James", 111-11-1112, "B"}; 	// student : data type, s1 : variable 
    student s3 ={"Sarah", "Joan", 222-22-2223, "C"}; 	// student : data type, s1 : variable 
	student s4 ={"Mark", "James", 333-33-3334, "B"}; 	// student : data type, s1 : variable

	cout << "Student's First Name " << s1.fname << endl;
	cout << "Student's Last Name" << s1.lname << endl; 
	cout << "Student's SSN" << s1.ssn << endl; 
	cout << "Student's Score" << s1.score << endl; 
	
	
	ofs.write((char *)&s1, sizeof(student)); 

	ofs.close();
}