/*
-Classes are a way to group data and/or functionality together
-When creating a class, by default, the class makes everything private, which means that only functions inside that class can access those variables
-Anything you can do with classes, you can do without them
-Classes are just a way to make our lives easier by organizing code in a certain format
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Player // Declare a class
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) // Functions created inside of a class are called methods
	{
		x += xa * speed;
		y += ya * speed;
	}

};

int main()
{
	Player player; // Create a variable with type Player. Variables made from class type are called objects. The new object variable is called an instance.
	player.Move(1, -1);

	std::cin.get();
	return 0;
}