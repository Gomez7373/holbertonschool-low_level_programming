#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - entrery point
* @argc: argument count
* @argv: argument vector
* return: 0 (Success) or 1 if there is an error.
*/
int main(int argc, char *argv[])
{
int total = 0;
int num; 
int len;
int i;
char *arg;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
arg = argv[i];
len = 0;
while (arg[len])
{
if (!isdigit(arg[len]) || atoi(arg) < 0)
{
printf("Error\n");
return (1);
}
len++;
}
num = atoi(arg);
total += num;
}
printf("%d\n", total);
return (0);
}
