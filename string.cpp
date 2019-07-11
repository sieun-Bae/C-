#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string stringLength;
	float inches = 0;
	float yardage = 0;

	std::cout << "Enter number of inches: ";
	std::getline (std::cin, stringLength);
	std::stringstream(stringLength) >> inches;
	//convert the string variable to a float variable
	std::cout << "you entered " <<inches<<"\n";
	yardage = inches/36;
	std::cout << "Yardage is " << yardage;

	return 0;
}