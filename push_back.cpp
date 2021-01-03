#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vectorInts;
	vector<int>::iterator it;

	cout<<vectorInts.size()<<'\n';

	vectorInts.assign(1, 23);
	for (it=vectorInts.begin();it!=vectorInts.end();++it)
	{
		cout<<*it<<" ";
	}

	vectorInts.push_back(24);
	cout<<vectorInts.size()<<"\n";
	for (it=vectorInts.begin();it!=vectorInts.end();++it)
	{
		cout<<*it<<" ";
	}

}