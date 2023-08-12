#include <iostream>



int mainl() // This was my main function during the reading of the section, i did not expect a question at the end due to how early on we are into the section so i just renamed it to allow the question to be posted
{
	double pi = 3.14195; // just normal
	double& ref = pi; // referencing pi above ^


	std::cout << ref << std::endl; // should call pi thru ref reference -- & is reference 
	std::cout << pi << std::endl;
	ref = 500;
	std::cout << pi; // should say 500? 

	const int avogadro{ 6.02214 };
	//int& avo{ avogadro } -- not allowed - variable must be modifiable
	
}
//Question #1

//Determine what values the following program prints by yourself(do not compile the program).

int main()
{
	int x{ 1 }; // x initialized as one
	int& ref{ x }; // referencing x - ref = 1

	std::cout << x << ref << '\n'; // 11

	int y{ 2 }; // y created as 2
	ref = y; // cant reference another variable so y's value is assigned to x (x==2)
	y = 3; // useless

	std::cout << x << ref << '\n'; // outputs 22

	x = 4; // x = 4

	std::cout << x << ref << '\n'; // 44

	return 0;
}
