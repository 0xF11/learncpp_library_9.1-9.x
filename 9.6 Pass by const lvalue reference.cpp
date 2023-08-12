#include <iostream>
#include <string>
#include <string_view>

void ref(const int &y);
void reef(int &z);
void trippleref(int x, int& y, const std::string z);
void stringviewstring(std::string_view sv);
void conststringstyle(std::string &s);



// -- TAKEAWAYS --

// -- Using RValues -- 

// Referencing things without using the const variable type will disallow it from using RValues
// Referencing things while using the const variable will allow you to use RValues.
// CAN NOT incrament in const variable references


// Strings and such
// Prefer std::string_view over const std::string
// Both reletively do the same thing although std::string &s requires one additional step to reference the object
// 
//
//
//		-- Note to self --
//	std::string_view is basically just a reference to std::string (i didn't know what string_view was during this section since i ignored it due to my c++ being outdated in earlier sections)


int main()
{
	int x{ 5 };
	ref(x);
	std::cout << '\n' << "Our integer should be 5!";
	ref(5); // will work because our chosen integer in the ref function is a constant
	//		   reef(5); // Wont work cause reference isn't constant
	int kk{ 5 };
	int l{ 4 };
	const std::string da = "nda";
	trippleref(kk, l, da);





	// STRING STUFF
	std::string svs{ "\n\nHello There!" };
	stringviewstring(svs);
	
	conststringstyle(svs);



}

void ref(const int &y)
{
	std::cout << y << std::endl;
}

void reef(int &z)
{
	std::cout << z << std::endl;
}

void trippleref(int x, int& y, const std::string z)
{
	std::cout << x;
	std::cout << '\n';
	std::cout << y;
	std::cout << '\n';
	std::cout << z;
	std::cout << '\n';
}


void stringviewstring(std::string_view sv)
{
	std::cout << sv << std::endl;
}


void conststringstyle(std::string &s)
{
	std::cout << s << std::endl;
}


