#include <iostream>

//		-- TAKEAWAYS --
//	-- NULL PTRS CHAPTER --
//
//
//
//
//	 I could use a null pointer to keep undefined behavior from happening if an object goes out of scope and my pointer is still pointing to it
//	 Dereferencing a Null pointer will cause undefined behavior, AND will probably crash the program.
//
//
//	Prefer references over pointers since references can not be dangling (or are hard to make dangling)
//	Pointers should be set to null pointer if they will become a dangling pointer to avoid undefined behavior.
//
//
//
//
//
//
//
//
//
//



int main()
{

	int *ptr{}; // Initilizing pointer as nothing -- NULLPTR
	int *ptrr = nullptr; // different way to make a NULL ptr


	int x{ 5 };
	ptr = &x; // initializes pointer to 5;
	std::cout << ptr << std::endl; // outputs mem address of 5
	std::cout << *ptr << std::endl; // outputs value in mem address (in this case 5)
	
	std::cout << "\n----------------------------------------------\n\n";

	int y{ 55 };
	// std::cout << *ptrr; -- Uncommenting this code causes the program to crash abruptly (takeaway above stating why)
	int *pointer{ &y }; // assigned to variable y 
	std::cout << *pointer << std::endl; // should print value stored in y's memory(55)
	std::cout << pointer << std::endl; // should print mem address


	if (pointer == nullptr)
	{
		std::cout << "This pointer is a null ptr!\n";

	}
	else
	{
		std::cout << "The pointer is not a null pointer\n";
	}

	pointer = nullptr;
	std::cout << pointer << std::endl; // should print 0000000 since pointer is null

	std::cout << (pointer == nullptr ? "pointer nullified " : "pointer not null") ;
}
