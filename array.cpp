#include<iostream>
#include<stdio.h>
#include<time.h>
#include<cstdlib>

int main()
{
	int userInput[40];

	for (int i=0;i<40;i++){	
		//srand(time(NULL));
		userInput[i] = rand()%100+1;
	}
	for (int i=0;i<40;i++){std::cout<<userInput[i]<<" ";}
	std::cout<<"\n";
	for (int i=0;i<40;i++){std::cout<<userInput[39-i]<<" ";}

	for (int i=0;i<40;i++){
		for (int j=0;j<40-1-i;j++){
			if(userInput[j]>userInput[j+1])
			{
				int temp=userInput[j];
				userInput[j] = userInput[j+1];
				userInput[j+1] = temp;
			}
		}
	}
	std::cout<<"\n";
	for (int i=0;i<40;i++){std::cout<<userInput[i]<<" ";}
	
	return 0;
}