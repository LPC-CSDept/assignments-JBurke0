#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;

int main()
{

	int n,m,i,j;
	char name[100][100];
	int scores[50][50];
	double average;
	while(1)
	{
	cout<<"Input the number of students ";
	cin>>n;
	if(n>0)
	{
	while(1)
	{
	cout<<"Input number of scores ";
	cin>>m;
	if(m>0)
	{
	for(i=0;i<n;i++)
	{
	cout<<"Enter student name ";
	cin>>name(i);
	cout<<"Enter "<<m<<" scores ";
	for(j=0;j<m;j++)
	{
	cout<<"Enter score "<<j+1<<": ";
	cin>>scores(i)(j);
	}
	}
	cout<<"student name sum average " <<endl;
	for(i=0;i<n;i++)
	{
	int sum=0;
	cout<<name(i)<<" ";
	for(j=0;j<m;j++)
	{
	sum=sum+scores(i)(j);
	}
	average=(double)sum/m;
	cout<<"\t\t\t"<<sum;
	cout<<"\t\t\t"<<average;
	cout<<" "<<endl;
	}
	break;
	}
	else
	{
	cout<<"Input valid number of scores "<< endl;
	}
		}

	break;
	}
	else
	{
	cout<<"Invalid number of students "<< endl;
	}
		}
	return 0;
}
