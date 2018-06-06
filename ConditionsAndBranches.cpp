/*
-2 parts to the if statement: Evaluation of the actual condition and the branch depending on that condition
-A lot of optimize code avoid branching/if statements because it slows down the program
*/

/*
-There is no actual else if keyword in C++
-else if is actually just:
else
{
	if(condition)
	{
		do something...
	}
}
*/
#include <iostream>

int main()
{
	int x = 6;
	if (x == 5)
	{
		std::cout << "Hello World!" << std::endl;
	}

	const char* ptr = "Hello";
	if (ptr)
		std::cout << ptr << std::endl;
	else if (ptr == "Hello")
		std::cout << "Ptr is Hello!" << std::endl;
	else
		std::cout << "Ptr is null!" << std::endl;
	std::cin.get();
}