#include<iostream>
#include<cstdlib>
#include<time.h>

int main()
{
	int target;
	int guess=-1;

	srand(time(NULL));
	target = rand()%100+1;

	while(guess!=target)
	{
		std::cout<<"Guess the number!: ";
		std::cin>>guess;

		if(guess>target){std::cout<<"too high\n";}
		else if(guess<target){std::cout<<"too low\n";}
		else {std::cout<<"correct!\n";}

		if(guess=='q'){std::cout<<"gg...\n"; break;}
	}

	return 0;
}