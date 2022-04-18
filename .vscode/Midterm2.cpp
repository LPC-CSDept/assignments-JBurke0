#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream 	ifs;
	int 		numofStudent;
	string 		studentName;
	double 		score1, score2;
	double 		sum, avg;
	double 		totalsum, tavg;
	
	ifs.open("students.txt");
	if (!ifs)
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	ifs >> numofStudent;

	totalsum = 0;
	for(int i=0; i<numofStudent; i++){
		ifs >> studentName >> score1 >> score2;
		sum = score1 + score2;
		avg = sum / 2;
		totalsum += sum;
		cout << studentName << "\t" << score1 << "\t" << score2 << endl;
		cout << "Sum of Score:\t" << sum << "\t" << "Average Score:\t"<< avg << endl;
	}
	tavg = totalsum / numofStudent;
	cout << "Toal Sum of Score:\t" << totalsum << "\t" << "Total Average Score:\t"<< tavg << endl;
	

}