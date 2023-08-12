#include <iostream>


int main()
{
	const int x{ 5 };
	// int &ref{ x } // not gonna work cuz constant 

	// instead
	const int &ref{ x }; // now ref is constant, and intakes x as a constant

	std::cout << x;
	std::cout << '\n' << ref;



	// const referenances and static variables

	int y{ 500 };
	const int YRef{ y };
	std::cout << y << '\n'; // should print 500
	std::cout << YRef << '\n'; // should print y (500)

	y = 40;
	std::cout << y << '\n'; // changes to 40.
	std::cout << YRef << '\n'; // keeps value of 500 since it was a constant and cant be modified

	const int ZRef{ 15 }; // 15 is made a temporary object (like if i put -- int z = 5 -- ) except it is only associated with ref and survives in the scope as long as ref.
	std::cout << ZRef;

	std::cin.get();
	return 0;
}
