
/*
* Compile: g++ main.cpp -o main.out
* Run: ./main.out */

#include <iostream>

std::cout << "Hello world";

//before starting main function, std:: can be elimianted
using namespace std;
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
