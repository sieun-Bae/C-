#include <vector>
#include <iostream>
using namespace std;

int main() {
    /// TODO_1. Declare a std::vector of type int, push the values from 0 to 9, and print out the value of each element by traversing it using an iterator.
    std::vector<int> vInt;
    std::vector<int>::iterator it;
    for(int i=0;i<10;i++)
    {
        vInt.push_back(i); 
    }
    for (it=vInt.begin();it != vInt.end();++it)
    {
        cout<<*it<<" ";
    }
    return 0;

}
