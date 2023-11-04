#include <stdio.h>
/**
 * main - entry poin
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0
 */

int main(int argc)
{
int i;

printf("%d\n", argc - 1);

for (i = 1; i < argc; i++)
{
printf("%s\n");
}
return (0);
}
