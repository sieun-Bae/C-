#include<iostream>

int main()
{
	const int row=4;
	const int col=4;

	int arr[row][col];
	int vector[row], product[row];
	int sum;

	for (int i=0;i<row;i++){
		for (int j=0;j<row;j++){
			std::cin>>arr[i][j];
			std::cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<"\n";
		}
	}
	for (int i=0;i<row;i++)
	{
		std::cout<<"vector["<<i<<"]=\n";
		std::cin>>vector[i];
	}	
	for (int i=0;i<row;i++){
		sum =0;
		for(int j=0;j<col;j++)
		{
			sum+=(arr[i][j]*vector[i]);
		}
		product[i]=sum;
	}
	for(int i=0;i<row;i++){
		std::cout<<"product["<<i<<"]="<<product[i]<<"\n";
	}
	return 0;
}