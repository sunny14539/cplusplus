/*
-Functions are blocks of code that we write that are designed to perform specific tasks
-We can provide functions with specific parameters and it can return specific values
-Functions prevent code duplication
-Functions that specify a return type must return a value
-Only the main function does not need to specify a return type, because it will automatically assume that you are returning 0 (Modern C++)
*/
#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);

	std::cin.get();
}