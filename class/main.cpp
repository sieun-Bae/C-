#include "main.hpp"

int main()
{
	Dog dog1, dog2;
	dog1.setName("Trixie");
	dog1.setLicenseNumber(1234);

	dog2.setName("kali");
	dog2.setLicenseNumber(5678);

	dog1.print();
	dog2.print();

	return 0;
}