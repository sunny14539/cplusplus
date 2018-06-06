/*
-Loops are things that we can write in our code when we want to perform certain operations multiple times
-When should we use a While Loop vs a For Loop
--For loops should be used when you need to declare a variable, keep track of the variable, and change that variable based on the condition
--While loops should be used when you don't need to declare a variable (using a variable you already have) and when you don't need to declare the condition or change it
*/

#include <iostream>

int main()
{
	// For loops are broken into 3 parts, seperated by a semicolon
	// The first part is a variable declaration
	// The second part is a condition/comparison
	// The last part is code that will be called before the next iteration of the for loop
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Hello World!" << std::endl;
	}

	std::cout << "======================" << std::endl;

	// For loops can also be written in different ways and still perform the same tasks
	int j = 0;
	bool condition = true;
	for (; condition; )
	{
		std::cout << "Hello World!" << std::endl;
		j++;
		if (!(j < 5))
			condition = false;
	}

	std::cout << "======================" << std::endl;
	
	// While Loops
	j = 0;
	while (j < 5)
	{
		std::cout << "Hello World!" << std::endl;
		j++;
	}

	std::cout << "======================" << std::endl;

	// Do-while Loops
	// Difference between do while and while loop is that a do while loop will run at least once

	j = 5;
	do
	{
		std::cout << "Hello World!" << std::endl;
		j++;
	} while (j < 5);

	std::cin.get();
}