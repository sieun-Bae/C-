#include <iostream>
#include "dog.cpp"

using namespace std;

void printRoster(Dog, int);

void printRoster(Dog roster[], int size)
{
	for (int i=0;i<size;i++)
	{
		roster[i].printInfo();
		cout<<"\n\n";
	}
}