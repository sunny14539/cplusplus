/*
-A pointer is an integer which stores a memory address
-Memory in a computer is similar to a street with a row of houses. Memory is just a linear one dimensional line
-Every house on the street that has an address has one byte of data
-A pointer is the address that tells us where that house is, or that specific byte of memory is
-Everything we do in our code is reading/writing to memory
-It is possible to make an application that does not use pointers, but they are an extremely useful tool because memory is the single most important thing to have
-A type does not change what a pointer is
-Types of pointers do not matter, they are only useful for manipulation of that memory
-Pointers themselves are just variables, and these variables are also stored in memory
-We can have pointers to pointers
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;
int main()
{
	// NOTE: nullptr = NULL = 0

	// This is creating data on the stack
	int var = 8;
	int* ptr = &var;
	*ptr = 10; // Dereferencing allows us to access the value that the variable is pointing to
	LOG(var);

	// This is creating data on the heap
	char* buffer = new char[8]; // This is allocating 8 bytes of memory and is returning a pointer to the beginning of this block of memory
	memset(buffer, 0, 8); // memset fills a block of memory with data we specify. memset takes in a pointer, a value, and a size

	char** ptr = &buffer; // This is a pointer to a pointer

	delete[] buffer; // because we use the new keyword, and this data is heap allocated, we need to delete data after we are done with it

	std::cin.get();
}