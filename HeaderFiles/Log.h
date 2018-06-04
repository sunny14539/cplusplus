/*
-Anything that begins with a # is known as a preprocessor command or a preprocessor directive
-This means that it will be evaluated by the C++ preprocessor before the file is compiled
-Pragma is an instruction sent to the compiler or the preprocessor
-Pragma once means only include this file once, and is known as a header guard
-Prevents us from including a single header file multiple times into a single translation unit
-Most people use pragma once in the industry
-Mostly all compilers support pragma once
-Better to use pragma once instead of ifndef because it is cleaner
*/
#pragma once

void InitLog();
void Log(const char* message);

/*
-Traditional way to include header guard

#ifndef _LOG_H
#define _LOG_H

//Some code here...

#endif
*/