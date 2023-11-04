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
argc = 1;

{
printf("%d\n", argc - 1);
}

for (argc = 1; argc < 3; argc++);

 
return (0);
}
