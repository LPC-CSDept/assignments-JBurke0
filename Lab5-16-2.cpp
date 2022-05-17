#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream 	ofs;
	int 		numofStudent;
	string 		studentName;
	double 		score1, score2;

	ofs.open("studentRecord.txt");
	if (!ofs) 
	{
		cerr << "File open Error\n";
	
		exit(0);
	}
	
	cin >> numofStudent;
	ofs << numofStudent << endl; 

	for (int i=0; i<numofStudent; i++){
		cin >> studentName >> score1 >> score2 ;
		ofs << studentName << " "<< score1 << " "<< score2 << endl;
	}
	ofs.close();
}