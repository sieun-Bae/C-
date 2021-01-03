#include <iostream>
#include <string>

typedef struct Test_
{
	char* ptr;
} Test;

void shallow_copy(Test&, Test&);
void deep_copy(Test&, Test&);

int main()
{
	char a = 'a';
	char* p = &a;
	Test src = {p};
	Test dest;

	shallow_copy(src, dest);
	std::cout<<src.ptr<<" ";
	std::cout<<dest.ptr<<"\n";
	deep_copy(src, dest);
	std::cout<<src.ptr<<" ";
	std::cout<<dest.ptr<<"\n";
	return 0;
}

void shallow_copy(Test& src, Test& dest)
{
	dest.ptr = src.ptr;
}

void deep_copy(Test& src, Test& dest)
{
	dest.ptr = (char*)malloc(strlen(src.ptr)+1);
	strcpy(dest.ptr, src.ptr);
}