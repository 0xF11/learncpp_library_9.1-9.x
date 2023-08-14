#include <iostream>
#include <string>


void greetings(std::string *ptr = nullptr)
{
	std::cout << "Hello! Welcome User: ";

	if (!ptr) // if ptr isn't valid then
	{
		std::cout << "guest " << std::endl;
	}
	else // otherwise dereference pointer and output it with a newline

	{
		std::cout << *ptr << std::endl;
	}
}



void ptrnul(int*& check) // int*& signifies im referencing a pointer
{
	check = nullptr; // note to self - do not use == for ptrs, it does not work.
}

void nullchecker(int* ptrrr)
{
	if (!ptrrr)
	{
		std::cout << "Pointer is NULL!";
	}
	else
	{
		std::cout << "Pointer is not null!";
	}
}
int main()
{
	std::string mja = "mja";
	greetings(); // outputs guest
	greetings(&mja); // outputs mja

	int z{ 5 }; 
	int *ptrr{ &z }; // point 2 z

	std::cout << ptrr << std::endl; // output mem addr
	nullchecker(ptrr); // lazy way to implement nullptr checking since i have to leave fairly soon
	std::cout << '\n';

	ptrnul(ptrr); // changes my ptr to null
	std::cout << ptrr << std::endl; // should output 00000
	nullchecker(ptrr);// lazy way to implement nullptr checking since i have to leave fairly soon






}
