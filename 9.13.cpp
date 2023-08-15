#include <iostream>
#include <string>



void GetProgramName(const std::string& PName)
{
	std::cout << "This programs name is: " << PName << std::endl;
}


const std::string& GetProgramUndefinedName()
{

	const std::string& PUName{ "Calculator" };
	std::cout << "This program is a: "<< PUName << " app!" << std::endl;
	return PUName;
}
const int& getUserID()
{
	static int incr{ 0 };

	++incr;

	return incr;
}


int main()
{
	std::string PName{ "Calculator" };
	GetProgramName(PName); // Behavior is not undefined since string is a static address (initialized in the function parameters)
	
	GetProgramUndefinedName(); // Could result in undefined behavior, because PUName is destroyed at the end of the program

	const int& id1{ getUserID() };
	const int& id2{ getUserID() };
	std::cout << id1 << id2 << std::endl; // Both of these are references so it will produce the wrong answer (22)

	const int ID1{ getUserID() };
	const int ID2{ getUserID() };
	std::cout << ID1 << ID2 << std::endl; // Both of these are no longer referencing the variable so it will produce 3,4 rather than 2,2
	// seems like if its referencing the variable it just takes the variable no matter what time its initialized, if its not it takes what it is assigned.

}
