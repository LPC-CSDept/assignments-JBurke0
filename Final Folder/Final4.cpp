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

	grades s1 ={"John", "Joan", 000-00-0001, "A"}; 	
	grades s2 ={"Bob", "Roberts", 111-11-1112, "B"}; 	
    grades s3 ={"Sarah", "Towns", 222-22-2223, "C"}; 	
	grades s4 ={"Mark", "James", 333-33-3334, "B"}; 	

	cout << "Student's First Name " << s1.fname << endl;
	cout << "Student's Last Name" << s2.lname << endl; 
	cout << "Student's SSN" << _s3.ssn << endl; 
	cout << "Student's Score" << s4.score << endl; 
	
	
	ofs.write((char *)&s1, sizeof(grades)); 

	ofs.close();
}