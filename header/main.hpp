#include<iostream>
using namespace std;
void calculate(float input1, float input2, char op, float &result)
{
    switch(op)
    {
        case('+'):
        {
            result = input1+input2;
            break;
        }
        case('-'):
        {
            result = input1-input2;
            break;
        }
        case('*'):
        {
            result = input1*input2;
            break;
        }
        case('/'):
        {
            result = input1/input2;
            break;
        }
    }
}
void printEquation(float input1, float input2, char op, float &result)
{
    cout<<input1<<" "<<op<<" "<<input2<<" = "<<result;
}