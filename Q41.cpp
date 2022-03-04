#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include<iomanip>
using namespace std;

int main()
{
  	int choice;

	cout << "Menu \n";
	cout << "1.Calculate Area of Circle"<< endl;
	cout << "2.Calculate Area of Rectangle"<< endl;
	cout << "3.Calculate Area of Triangle"<< endl;
	cout << "Quit";
	cin >> choice;

double width,height,radius,length,base;
double AreaCircle,AreaRectangle,AreaTriangle;
    switch(choice)
    
     {
		case 1:	
            cout << "Enter raduis"<<endl;
            cin>>radius;
            AreaCircle=pow(radius,2)*3.14159;
			cout << "Area of Circle" << endl;
			break;
		case 2:		
			cout << "Area of Rectangle" << endl;
			break;
		case 3:		
			cout << "Area of Triangle" << endl;
			break;
		case 4:		
			cout << "You chose menu 4\n";
			break;
		default:	
			cout << "Wrong menu item \n";
	}
}