#include <iostream>
#include <typeinfo>
#include <string>


//  TAKEAWAYS RESERVED SPACE  //
//
//  Documentation of variables shown
//
//	& - Address-of operator
//	* - Dereferencing Operator
//
//	
//	Using & before a variable name E.G - &var - when printing it will print its stored address in memory
//	Using *& before a value prints the value stored in the memory address at the value E.G - *&var or *(&var) - instead of just assigning it a value.
//	
//
//	--		Pointers		--
//	Pointers point to a memory address
//	Memory addresses can be printed, or to print the value in the address we can dereference the pointer by doing * before the variable (E.G *ptrvariable)
//		
//	Pointers doing this
//	*ptr = 6
//	Modify the pointed at variables value
//		
//	Pointers doing this	
//	ptr = &variable2
//	Change the variable the pointer is pointing at
//	
//	Pointers are objects
//	Pointers can change what theyre pointing at, references cant
//	Dangling pointers can be dangerous	
//	
//	
//	
//
//		
//	
//	VOCAB	
//	Dangling == Something pointing to or referencing something that has been destroyed
//	E.G. - The variable (var) Goes out of the scope of int main but im still using a pointer to point at it, The pointer is a dangling pointer
//
//////////////////////////////

int main()
{
	int x{ 99 }; // int value initialized
	int &ref{ x }; // reference to x

	std::cout << x << std::endl; // just prints x - (99)
	std::cout << ref << std::endl; // prints a reference to x - (99)
	std::cout << &x << std::endl; // prints memory address to x?
	std::cout << *&x << std::endl; // prints value stored in the memory address associated with x

	int* ptr{ &x };// pointer holds the memory address of x
	std::cout << ptr << std::endl; // will output the memory address of our variable (x)
	std::cout << *ptr << std::endl; // will output the value held by the memory address of our variable (x - 99)

	*ptr =  9; // Assigns x to 9
	std::cout << *ptr << std::endl; // Prints 9 (from x's memory address)
	std::cout << ptr << std::endl; // Prints x's memory address
	std::cout << x << std::endl; // prints the value 9 (modified by the pointer)

	std::cout << "\n\n\n----------------------------------------\n\n\n";

	int x2{ 8 };
	ptr = &(x2); // ptr assigned memory address of x2 now

	std::cout << ptr << std::endl; // prints the memory address for our new variable

	std::cout << *ptr << std::endl; // should print x2


}
