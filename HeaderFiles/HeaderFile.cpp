/*
-Traditionally used to declare certain types of functions
-Common place to store declarations for functions
-Using the #include, which has the ability to copy and paste files into other files, we need to copy and paste declarations into other files
*/

/*
Angular Brackets vs Double Quotations
-If the include file that we want to include is inside one of these include path folders, we can use <> to tell the compiler to search for these folders
-Quotes are usually used to include files that are relative to the current file
-Quotes can also be used to specify files that are relative to include directories that are passed through the compiler, so they can be used anywhere
*/

/*
-Header files that are in the C standard library will often have a .h extension
-Files that are in the C++ standard library will often not have an extension, although they are files none the less
*/

#include <iostream>
#include "Log.h"

int main()
{
	InitLog();
	Log("Hello World!");
	std::cin.get();
}