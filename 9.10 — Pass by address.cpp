#include <iostream>
#include <string>

// 9.10 -- Pass by address
//

// pass by value DOES make a copy of the variable.
// pass by reference does NOT make a copy of the variable.
// pass by address (or pass by using a ptr) does NOT make a copy of the variable.

void passbyvalue(std::string z)
{
	std::cout << z << std::endl;
}

void passbyref(std::string &x)
{
	std::cout << x << std::endl;
}

void passbyaddr(std::string *ptr)
{
	std::cout << *ptr << std::endl;
}
void valchange(int *intptr)
{
	std::cout << *intptr << std::endl; // output value before incrementing
	std::cout << "-----INCREMENT INCOMING!-----\n"; // debug info for incrementing supposed to happen
	++*intptr;//increment whatever address's value im fiddling with
	std::cout << *intptr << std::endl; // output incremented val
}

void makesure_notnullptr(int *vvs)
{
	if(vvs) // ONLY runs if pointer is not invalid (or nullptr)
	{
		std::cout << *vvs << std::endl;
	}
	else
	{
		std::cout << "ptr is null. Sorry." << std::endl;
	}
}

int main()
{
	std::string exmp = "st";

	passbyvalue(exmp); // Passes our string by the value
	passbyref(exmp); // Passes our string by referencing the variable
	passbyaddr(&exmp); // Passes our string by the memory address we're accessing (variable == exmp) -- get mem addr like normal by using & before the variable name (&exmp)


	std::string vv{ "Hello!" };
	std::string *ptrprint{ &vv }; // Making a pointer to the address I want 
	passbyaddr(ptrprint); // dont have to access the address of the variable in said function -- different style of doing it i guess? dont know when i would realistically do this.

	int val{ 9 };
	valchange(&val); // gets address of value (and increments it to 10 in this case?)
	
	std::cout << "----Divider----\n";

	makesure_notnullptr(&val);
	makesure_notnullptr(nullptr);

}
