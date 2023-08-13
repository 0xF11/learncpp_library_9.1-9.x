#include <iostream>

//Question #1

// What values does this program print ? Assume a short is 2 bytes, and a 32 - bit machine.

// Comments indicate what it prints
int main()
{
	short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value }; // assigns a short POINTER to the MEMORY address of VALUE

	std::cout << &value << '\n'; // Outputs 0012FF60
	std::cout << value << '\n'; // Outputs 7
	std::cout << ptr << '\n'; // Outputs 0012FF60
	std::cout << *ptr << '\n'; // Outputs 7
	std::cout << '\n'; // new line durr durr

	*ptr = 9; // Assigns `short value{7} to 9

	std::cout << &value << '\n'; // Prints 0012FF60 still
	std::cout << value << '\n'; // Prints 9
	std::cout << ptr << '\n'; // Prints 0012FF60 Still again
	std::cout << *ptr << '\n'; // Prints 9
	std::cout << '\n'; // New line durr

	ptr = &otherValue; // Changes the pointer to the memory address of otherValue (0012FF54)

	std::cout << &otherValue << '\n'; // Outputs 0012FF54
	std::cout << otherValue << '\n'; // Outputs 3
	std::cout << ptr << '\n'; // Outputs 0012FF54
	std::cout << *ptr << '\n'; // Outputs 3
	std::cout << '\n'; // New line durr

	std::cout << sizeof(ptr) << '\n'; // outputs 2 ? -- After running i understand why it outputs 4, because the pointer is not dereferenced
	std::cout << sizeof(*ptr) << '\n'; // outputs 4 ?  -- After running i understand why it outputs 2, because the pointer IS dereferenced into a short

	return 0;
}
