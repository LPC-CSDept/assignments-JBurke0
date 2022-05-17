#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream 	ifs;
	int 		numofStudent;
	string 		studentName;
	double 		score1, score2;
	double 		sum, avg;
	double 		tsum, tavg;
	
	ifs.open("studentRecord.txt");
	if (!ifs)
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	ifs >> numofStudent;

	tsum = 0;
	for(int i=0; i<numofStudent; i++){
		ifs >> studentName >> score1 >> score2;
		sum = score1 + score2;
		avg = sum / 2;
		tsum += sum;
		cout << studentName << "\t" << score1 << "\t" << score2 << endl;
		cout << "Sum:\t" << sum << "\t" << "Average:\t"<< avg << endl;
	}
	tavg = tsum / numofStudent;
	cout << "Toal Sum:\t" << tsum << "\t" << "Total Average:\t"<< tavg << endl;
	

}