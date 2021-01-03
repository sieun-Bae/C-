#include "main.hpp"

int main()
{
	Animal* c1 = new Cat("polly", 20.0, "cat"); 
	// 애초에 Animal class로 정적바인딩 되었기 때문에 base class의 calculating함수로 계산됨. 컴파일 이후 Cat class로 바인딩해주기 위해 virtual함수 사용
	Dog d1("spot", 30.0, "dog"); 
	// Dog class 내의 calculating 함수로 잘 계산됨.

	cout<<"\nPolly Rate: $"<<c1->calcDailyRate();
	cout<<"\nSpot Rate: $"<<d1.calcDailyRate();

	delete c1;
}