
/*
* Compile: g++ main.cpp -o main.out
* Run: ./main.out 
* 	 : "./main.out", stdin=open("input.txt","r")
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


using namespace std;


std::cout << "Hello world";

//before starting main function, std:: can be elimianted
int main()
{
	cout << "Hey, writing std:: is pain";

	return 0;	
}

//However, when code is added to a large pjt, might reference from a different library.

int integer = 4543;
std::cout << "The value of integer is" <<integer;

//sizeof, endl
cout<<"int size = "<<sizeof(int)<<endl;

//const 
const int weightGoal = 100;

//enum
enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, AUg, Sep, Oct, Nov, Dec};
MONTHS bestMonth;
bestMonth = Jan;

//format output ex std::setw, \t
#include <iomanip>
std::cout <<"Ints"<<std::setw(15)<<"Floats"<<std:setw(15)<<"Doubles"<<endl;
std::cout << "Ints\t";

//file IO
///create a stream
ofstream  myfile; //writing
ifstream myfile; //reading
fstream myfile; //writing and reading

myfile.open("filename");
myfile.close();

string line;
//create an output stream to write to the file
ofstream myfileI("input.txt", ios::app); //ios::ate
if(myfileI.is_open()){
	myfileI <<"I am adding a line";
	myfileI.close();
} 
else cout << "unable to open file for writing";

//create an input stream to read the file
ifstream myfileO("input.txt"); //During ifstream, the file is opened, don't have explicitly open the file
if (myfileO.is_open()){
	while(getline(myfileO,line)){
		cout<<line<<'\n';
	}
	myfileO.close();
} 
else cout << "unable to open file for reading";

//header files
//cpp
#include "main.hpp"
//hpp
#include <iostream>
using namespace std;

//string input
std::getline(std::cin, userName);


int main()
{
	return 0;
}

