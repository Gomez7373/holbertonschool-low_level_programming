#Resources
---
`Read or watch:`

* stdarg.h = https://en.wikipedia.org/wiki/Stdarg.h 
* Variadic Functions = https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html
* Const Keyword = https://www.youtube.com/watch?v=1W4oyuOdXv8
___
#man or help:
---
* stdarg:

* stdarg is not a standalone term but rather a part of the C standard library. It is an abbreviation for "standard arguments," and it is associated with variable argument lists in C.

* In C programming, certain functions can accept a variable number of arguments. The header <stdarg.h> provides a set of macros and functions that enable a function to accept a variable number of arguments. This is particularly useful when you want to create functions like printf that can take a variable number of arguments.

* The key components of <stdarg.h> include:

* va_list: This is a type representing a variable argument list. It is typically used to traverse the arguments within a function that accepts a variable number of arguments.

* va_start: This macro initializes the va_list to point to the first variable argument in the function.

* va_arg: This macro retrieves the next argument from the variable argument list.

* va_end: This macro cleans up the va_list after it's been used.

___
#Learning Objectives
---
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
___

#General
---

* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier
___
#Requirements
---

General:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using:
 https://github.com/hs-hq/Betty/blob/master/betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use the following macros: va_start, va_arg and va_end
* You are allowed to use __putchar:
https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
* Don’t forget to push your header file
* All your header files should be include guarded

___

#Tasks:
---
`0-sum_them_all.c`
* Write a function that returns the sum of all its parameters.

* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0
---
`0-main.c`

* #include <stdio.h>
* #include "variadic_functions.h"


/*
 * main - check the code
 * Return: Always 0.
 
*/

>  int main(void) 

>  { 

> int sum;

> sum = sum_them_all(2, 98, 1024);

> printf("%d\n", sum);

> sum = sum_them_all(4, 98, 1024, 402, -1024);

> printf("%d\n", sum);    

> return (0);

> }

*COMPILE*

* $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
* $ ./a
___

Repo:

* GitHub repository: holbertonschool-low_level_programming
* Directory: variadic_functions
* File: 0-sum_them_all.c

---

 `1-print_numbers.c`

Write a function that prints numbers, followed by a new line.

Prototype:

* void print_numbers(const char *separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function

___

`1-main.c`

* #include "variadic_functions.h"

/**
 * main - check the code
 * Return: Always 0.
*/

> int main(void)

> {

> print_numbers(", ", 4, 0, 98, -1024, 402);

> return (0);

> }

*COMPILE*

* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b

* ./b
