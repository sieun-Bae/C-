#include <iostream>
#include <cmath>

//std::pow(base,exponent)
int main()
{
	std::cout<<std::pow(3,5)<<'\n';
	int a,b,c;

	a=2;
	b=7;
	c=(a>b)?a:b;

	std::cout<<c<<'\n';
/*
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/
	//Dimension of the cube
	float cubeSide = 5.4;
	//Dimension of sphere
	float sphereRadius = 2.33;
	//Dimensions of cone;
	float coneRadius = 7.65;
	float coneHeight = 14;

	double cubeV, sphereV, coneV=0;
	cubeV = std::pow(cubeSide,3);
	sphereV = (4.0/3.0)*M_PI*std::pow(sphereRadius,3);
	coneV = M_PI*std::pow(coneRadius,2)*(coneHeight/3);

	std::cout<<"cube Volume: "<< cubeV<<"\n";
	std::cout<<"sphere Volume: "<<sphereV<<"\n";
	std::cout<<"cone Volume: "<<coneV<<"\n";
	return 0;
}