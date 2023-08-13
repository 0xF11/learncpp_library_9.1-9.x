#include <iostream>

//		-- TAKEAWAYS --
//	-- 9.9 — Pointers and const
//
//
//
//
//
//	
//
//
//
//	You can change a const ptr to a non const variable, The variable however will be treated as if it is constant
//	const *(variable) ptr's are syntactically dissallowed to have their memory address changed, this makes 
//	
//
//
//
//
//
//
// -- WEBSITE RECAP --
//	Pointer and const recap
//
//	To summarize, you only need to remember 4 rules, and they are pretty logical :
//
//	A non - const pointer can be assigned another address to change what it is pointing at.
//	A const pointer always points to the same address, and this address can not be changed.
//	A pointer to a non - const value can change the value it is pointing to.These can not point to a const value.
//	A pointer to a const value treats the value as const when accessed through the pointer, and thus can not change the value it is pointing to.These can be pointed to const or non - const l - values(but not r - values, which don’t have an address).
//	Keeping the declaration syntax straight can be a bit challenging :
//
//	A const before the asterisk is associated with the type being pointed to.Therefore, this is a pointer to a const value, and the value cannot be modified through the pointer.
//	A const after the asterisk is associated with the pointer itself.Therefore, this pointer cannot be assigned a new address.
//
//	-- Help remembering syntax
//	
//
//	int *const pointer == Pointer cant be assigned to new address
//	const int *pointer == Pointer can be assigned to a new address, The address it is accessing (usually) is constant.



int main()
{

	const int x{ 5 };
	// int *ptrx{ &x }; -- Will not work since ptr is not const, if this was allowed i could modify our const by dereferencing the ptr.
	const int *ptr{ &x };

	std::cout << ptr << std::endl; // mem addr
	std::cout << *ptr << std::endl; // val from pointed at mem addr
	
	// *ptr = 5; -- dissalowed cuz x is const so is our ptr

	const int x2{ 99 };
	ptr = &(x2);
	std::cout << ptr << std::endl; // mem addr of x2
	std::cout << *ptr << std::endl; // value from pointed at mem addr for x2 (99)


	ptr = &(x);

	int y{ 99 };
	int *const ptry{ &y }; // Makes the pointer itself constant and dissallows me from changing its memory address

	std::cout << ptry << std::endl; // mem addr
	std::cout << *ptry << std::endl; // val

	// ptry = &x2; // dissallowed syntactically - our pointer is a constant

	const int *ptr4{ &y };

	// *ptr4 = 999; // disallowed , pointer treats it as a constant since the ptr is pointing at something constant
	std::cout << *ptr4 << std::endl; // print 99 (from y mem addr)
	std::cout << "---------------------------\n";
	y = 500; // allowed cuz y is not bound to a constant variable-type
	std::cout << *ptr4 << std::endl; // print 500 (from y mem addr)


}
