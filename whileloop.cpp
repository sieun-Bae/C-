#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    while (guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";

        if (guess==-1)
        {
            break;
        }
        
        if (guess>target){std::cout << "too high";}
        else if (guess < target){std::cout << "too low";}

    } 
    return 0;
}
