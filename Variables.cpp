/*
-Any type of data that we want to change/modify/manipulate/read/write, we need to store that data in a variable
-Variables allow us to name a piece of data that we store in memory
-Variables occupy memory
-Variables are stored in memory, in either the stack or the heap
-The size of a data type depends on the compiler
*/

/*
-4 bytes of data. Can store a value between -2b -> 2b
-1 byte = 8 bits, 4 bytes = 32 bits
-Because the variable is signed, one of the 32 bits has to be for the (negative) sign.
-31 bits for the actual number
-bits can be 0 or 1
-2^31 = approximately 2.1b
-'unsigned' keyword lets us define an int that does not have a sign
-So, instead we have 2^32 = approximately 4.29b
*/

/*
-char = 1 byte
-short = 2 bytes
-int = 4 bytes
-long = 4 bytes
-long long = 8 bytes
-float = 4 bytes
-double = 8 bytes
-bool = 1 byte
*/

/*
-When assigning a float value, ex. 'float variable = 5.5;', we are actually assigning it as a double
-In order to specify the value to be a float, we need to declare it like this: 'float variable = 5.5f;'
*/

/*
-boolean values
-0 means false, any other number except zero means true, or 1
-Only takes one bit to represent, but we need to retrieve from memory, so we can only access it by bytes
*/

//'sizeof' tells us the bytes of the data type

#include <iostream>

int main()
{
	float variable = 5.5;
	double var = 5.2;
	std::cout << variable << std::endl;
	std::cin.get();
}