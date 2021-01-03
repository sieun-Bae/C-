#include "main.hpp"

int main()
{
	const string status = "salary";
	string level;
	level = "salary";
	Employee* e1;

	if (status != level)
	{
		e1 = new Employee();
	}
	else
	{
		e1 = new Manager();
	}
	e1 -> setPayRate(12000.00);
	cout<<"e1 pay: $"<<e1->calcWeeklyPay();

	delete e1;
	return 0;
}