#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<float>);

int main()
{
	vector<float> vFloat;
	vector<float>::iterator it;
	cout<<vFloat.size();

	vFloat.resize(10);
	cout<<vFloat.size();

	vFloat.assign(10, 3.3);
	
	printVector(vFloat);
	return 0;
}

void printVector(vector<float> vIn)
{
	vector<float>::iterator it;
	for (it=vIn.begin();it!=vIn.end();++it)
	{
		cout<<*it<<" ";
	}
}