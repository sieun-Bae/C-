#include<iostream>

int main()
{
    float sum=0;
    float average=0;
    
    for (int i=0; i<5; i++)
    {
        float temp;
        //std::cout << "please input number: ";
        std::cin >> temp;
        
        sum += temp;
    }
    
    average = sum/5;
    std::cout << "average: " << average;
    
    return 0;
}