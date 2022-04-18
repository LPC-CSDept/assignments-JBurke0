#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include <fstream>

using namespace std;
int inputX,inputY,total;

void getInput()
{
cout<<"User input variable x"<<endl;
cin>>inputX;
cout<<"User input variable y"<<endl;
cin>>inputY;
}

void isSame()
{
    if (inputX==inputY)
        cout<<"Inputs must be different numbers"<<endl;
        cout<<"Program will now exit, Bye!"<<endl;
        exit(0);
    
}

void isDivision()
{
if (inputX > inputY)  (inputX/inputY)=total;
   

else (inputX<inputY)
    (inputY/inputX)=total;

}

void FileWrite()
{
  ofstream output("question5.txt")
	ofs.stream question5;
    file.open("question5.txt")
    if (file_.is_open()){
        file_<<"intputX is:"<<iinputX<<"Input Y is:":<< "Total is:"<<total<<;

    }
    file.close();
    std::cin.get();
}
int main(){
    int inputX,inputY,total;
 getInput();
 isSame();
 isDivision();
 FileWrite();
 return 0;

}