/*
-Control Flow statements work with loops
-3 main control flow statements: continue, break, return
-Continue: can only be used inside of a loop. It says to go to the next iteration of this loop, if there is one, otherwise it will end the loop
-Break: primarily used in loops and appears in switch statements. It says to get out of the loop or end the loop
-Return: gets you out of the function entirely. Does not be inside of a loop
*/

#include <iostream>

int main()
{
	// Continue
	for (int i = 0; i < 5; i++) // Prints out "Hello World!" 3 times, as well as 0, 1, and 2
	{
		if (i > 2)
			continue; // Goes to the next iteration if i > 2
		std::cout << "Hello World!" << std::endl;
		std::cout << i << std::endl;
	}

	std::cout << "=====================" << std::endl;

	// Break
	for (int i = 0; i < 5; i++) // Prints out "Hello World!" 1 time, as well as 0
	{
		if ((i + 1) % 2 == 0)
			break; // Exits out of the loop
		std::cout << "Hello World!" << std::endl;
		std::cout << i << std::endl;
	}

	std::cout << "=====================" << std::endl;

	// Return
	for (int i = 0; i < 5; i++) // Prints out "Hello World!" 1 time, as well as 0
	{
		if ((i + 1) % 2 == 0)
			return 0; // Ends the program
		std::cout << "Hello World!" << std::endl;
		std::cout << i << std::endl;
	}
	std::cin.get();
}