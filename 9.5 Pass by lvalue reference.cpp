#include <iostream>
#include <string>


void passbyfunc(std::string f) {
	std::cout << f << std::endl;
}


void passbfunctionref(std::string &f)
{
	std::cout << f << std::endl;
}

void passfunctiontest(std::string &b)
{
	std::cout << b << std::endl;
}

void functionmaththing(int &ff) // ff is our num variable -- References variable used, and does whatever i want (in this case ++ff)
{
	++ff; // should add to num
}

int main()
{
	std::string a = "a: This pass through the function is more expensive "; // a is passed by the value and copied into f which could be expensive to do 
	std::string b = "b: Than this pass through the function!"; // b is passed by the value and referenced by f which is inexpensive -- website definition -- passed by reference and referenced  

	passbyfunc(a);
	passbfunctionref(b); 
	std::string c = "This is a test!";
	passfunctiontest(c);
	c = "Woop woop!";
	passfunctiontest(c);


	int num = 1;
	std::cout << num << std::endl;
	functionmaththing(num);
	std::cout << num << std::endl;


	// END OF LESSON - TAKEAWAYS - //
	// Going to start adding this for when i review my github at a later time if i need a recap on what was going on if i dont remember things, maybe itll help other too :) )
	
	// EXPENSE -

	// Passing a value by another value is expensive, so whenever i need to call an expensive value multiple times i should reference it rather than pass it through the value
	// Passing through a reference is inexpensive compared to passing through value.
	
	// MODIFIABLE - 
	// I cannot modify rvalues (values hard coded in) rather than variables through references.
	// for example, the above function "functionmaththing(num)" would not work as "functionmaththing(5)"
	// You can change arguments using pass through reference, instead of it using the value it refernces the equation to the value (example printed above)


  // Thanks for reading! Have a great day.
  // ~ 0xF11
}
