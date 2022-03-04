#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
  	int choice;

	cout << "Menu "<< endl;
	cout << "1.Calculate Area of Circle"<< endl;
	cout << "2.Calculate Area of Rectangle"<< endl;
	cout << "3.Calculate Area of Triangle"<< endl;
	cout << "4.Quit";
	cin >> choice;

double width,height,radius,length,base;

double AreaCircle,AreaRectangle,AreaTriangle;
    switch(choice)

     {
		case 1:

        if (radius>0)
        {
            cout << "Enter radius"<<endl;
            cin>>radius;
            AreaCircle=(pow(radius,2)*3.14159);
			cout << "Area of Circle"<<AreaCircle<< endl;
        }
			break;
		case 2:
        if (length>0 && width>0)
        {
            cout<<"Enter length"<<endl;
            cin>>length;
            cout<<"Enter width"<<endl;
            cin>>width;
            AreaRectangle=length*width;
			cout << "Area of Rectangle" << AreaRectangle << endl;
        }
			break;
		case 3:
        if (base>0 && height>0)
        {
            cout<<"Enter base"<<endl;
            cin>>base;
            cout<<"Enter height"<<endl;
            cin>>height;
            AreaTriangle=base*height*0.5;
			cout << "Area of Triangle"<< AreaTriangle << endl;
        }
        else
        {
        	cout<<"Values must be positive"<<endl;
        }
			break;
		case 4:
			cout << "You chose choice 4";
			break;
		default:
			cout << "Quit";
	}
}
