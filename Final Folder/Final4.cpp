#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

using namespace std;


int main()
{
    {
const unsigned short N=5;
struct Scores{     
      double sc[N];     
      string grade;
};

struct grades{    
      string first;    
      string last;   
      string ssn;   
      Scores score;

	ofstream ofs;
	
	ofs.open("grades.bin", ios::binary);

for (int i=0; i<numofgrades; i++){
		printgrades(s[i]);      
	}

	grades s1 ={"John", "Joan", 000-00-0001, "A"},{"Bob", "Roberts", 111-11-1112, "B"},{"Sarah", "Towns", 222-22-2223, "C"},{"Mark", "James", 333-33-3334, "B"}; 	
	

	cout << "Student's First Name "<<s1.fname <<endl;
	cout << "Student's Last Name" << s1.lname<<endl; 
	cout<<"Student's SSN" << _s1.ssn << endl; 
	cout<<"Student's Score"<< s1.score << endl; 
	
	
	ofs.write((char *)&s1, sizeof(grades)); 

	ofs.close();
}
    }

}