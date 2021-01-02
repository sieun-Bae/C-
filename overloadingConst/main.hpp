#include<iostream>
#include<string>
using namespace std;

class Dog
{
	string name;
	int license;
public:
	Dog();
	Dog(string nameIn);
	Dog(int numberIn);
	Dog(string nameIn, int numberIn);
	string getName();
	int getLicense();
};

Dog::Dog()
{
	name = "NA";
	license = 0;
}

Dog::Dog(string nameIn)
{
	name = nameIn;
	license = 0;
}

Dog::Dog(int numberIn)
{
	name = "NA";
	license = numberIn;
}

Dog::Dog(string nameIn, int numberIn)
{
	name = nameIn;
	license = numberIn;
}

string Dog::getName()
{
	return name;
}

int Dog::getLicense()
{
	return license;
}