/*
-Pointers and References are pretty much the same thing
-References are usually just pointers in disguise
-We use references to reference an existing variable
-References themselves are not new variables, in that they do not occupy memory, and they do not have storage 
-There is nothing you can do with a reference that you cannot do with a pointer
-When you declare a reference, you must initialize it to something, because it has to reference something
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

void Increment(int& value) // Pass by reference 
{
	value++;
}

int main()
{
	int a = 5;
	//int& ref = a; // Create an alias
	//ref = 2;

	//Once you declare a reference, you cannot change what it references
	//For Example:
	/*
	int a = 5;
	int b = 8;
	int& ref = a;
	ref = b;
	*/
	//a will be equal to 8 and b will be equal to 8

	//In order to change what a variable is referencing, you must use pointers
	//For Example:
	/*
	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;
	*/
	//a will be equal to 2 and b will be equal to 1

	Increment(a);

	LOG(a);

	std::cin.get();
	return 0;
}