#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	float payRate;
	string name;
	int employeeNumber;
public:
	void setPayRate(float rateIn);
	float getPayRate();
	virtual float calcWeeklyPay();
};

void Employee::setPayRate(float rateIn)
{
	payRate = rateIn;
}
float Employee::getPayRate()
{
	return payRate;
}
float Employee::calcWeeklyPay()
{
	return 40*payRate;
}

class Manager : public Employee
{
public:
	float calcWeeklyPay();
};
float Manager::calcWeeklyPay()
{
	return Employee::getPayRate() / 52;
}