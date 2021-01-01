#include <iostream>

int search(int*, int, int);

int main()
{
	const int size = 4;
	int array[] = {345, 75896, 2, 543};
	int searchKey = 543;
	std::cout << "Found at: " << search(array, size, searchKey);

	return 0;
}

int search(int arr[], int size, int key)
{
	for (int i=0;i<size;i++)
	{
		if(arr[i]==key){ return i; }
	}
	return -1;
}