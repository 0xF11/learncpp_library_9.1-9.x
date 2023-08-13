// Question #2

//What’s wrong with this snippet of code ?


int main()
{

	int value{ 45 };
	int* ptr{ &value }; // declare a pointer and initialize with address of value
	*ptr = &value; // assign address of value to ptr -- User is trying to dereference a ptr while assigning it to a memory address.
}
