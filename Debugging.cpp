/*
-Debug means to remove bugs from code
-We need to diagnose what is wrong with the code
-Usually, the computer is 99% correct, so it is the programmer that makes the mistakes
-A breakpoint is a point in our program at which the debugger will "break" or pause
-When the execution hits that breakpoint, it will pause and let us look at the state/memory of the program
-We can pause our program and take a look at what is going on in its memory
*/

/*
-When setting breakpoints, you can either press F9 and VS will set a breakpoint on the current selected line
-OR, clicking on the left side bar will also set a breakpoint
-If you're debugging, make sure you are in debug mode, then click Local Windows Debugger
-The program will run, but the focus will be stolen back to VS
-A big yellow arrow in the breakpoint indicates the instruction pointer, which means that it is on that current line of code, but has not executed that line of code yet
-There are many different buttons that will do specific things
--Continue: continues executing the program normally
--Step Into: steps into the current function (if there is a function) on the line of code so that we can see what the function does
--Step Over: steps over to the next line of code in the current function
--Step Out: steps out of the current function and takes us back to whatever called the current function
--Autos/Locals: will basically try to show local variables or variables that might be important to us
--Watch: lets us monitor variables by typing in variable names
*/

#include <iostream>

int main()
{
	int a = 8;
	a++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}

	std::cin.get();
}