#include <stdio.h>
#include "lists.h"

/**
* premain - Function to print lines before main
*/
void __attribute__ ((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
