#include <stdio.h>
/**
 * main - entry poin
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0
 */

int main(void)
{
int argc;
int count;

argc = 0;
count = 0;
{
printf("%d\n", argc);
}

for (count = 0; count < 2; argc++)

{
	printf("%d\n", argc + 1);
}

 
return (0);
}
