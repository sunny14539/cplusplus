/*
-There is basically no difference between classes and structs
-The only difference (technically) is visiability - Classes are private by default and Structs are public by default
-The only reason structs exist in C++ is because of the backwards compatibility it wants to maintain with C
-*NOTE: People have their own styles when writing code. They have their own ways of when to use a Struct and when to use a Class
-Structs could be used when you want to just represent data
-Classes could be used when you want to contain a bunch of functionality
*/

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2
{
	float x, y;

	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};

int main()
{
	Player player;
	player.Move(1, -1);

	std::cin.get();
	return 0;
}