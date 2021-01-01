#include <iostream>

using namespace std;

class Dog
{
	string name;
	int licenseNumber;

public:
	void setName(string nameIn);
	void setLicenseNumber(int licenseNumberIn);
	string getName();
	int getLicenseNumber();
	void print();
};

void Dog::setName(string nameIn)
{
	name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
	licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
	return name;
}

int Dog::getLicenseNumber()
{
	return licenseNumber;
}

void Dog::print()
{
	cout<<name<<" "<<licenseNumber<<"\n";
}