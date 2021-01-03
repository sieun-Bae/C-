#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<float> vFloat;
	vector<float>::iterator it;
	cout<<vFloat.size();

	vFloat.resize(10);
	cout<<vFloat.size();

	vFloat.assign(10, 3.3);
	for (it=vFloat.begin();it!=vFloat.end();++it)
	{
		cout<<*it<<" ";
	}
	return 0;
}