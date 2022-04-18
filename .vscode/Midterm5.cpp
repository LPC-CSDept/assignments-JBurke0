#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;
int inputX,inputY,total;

int getInput()
{
cout<<"User input variable x"<<endl;
cin>>inputX;
cout<<"User input variable y"<<endl;
cin>>inputY;
}

int isSame()
{
    if (inputX==inputY)
        cout<<"Inputs must be different numbers"<<endl;
        cout<<"Program will now exit, Bye!"<<endl;
        exit(0);
    
}

int isDivision()
{
if (inputX > inputY)  (inputX/inputY)=total
   

else (inputX<inputY)
    (inputY/inputX)=total

}

int FileWrite()
{
  
	ofs.stream file;
    file.open("question5.txt")
    if (file_.is_open()){
        file_<<"intputX is:"<<iinputX<<"Input Y is:":<< "Total is:"<<total<<;

    }
    file.close();
    std::cin.get();
}