#include <stdio.h>
/**
 * main - prints mult. type of size on pc 
 * 
 * Description: 'The program will print milt. sizes'
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char s;
int h;
long int e;
long long int i; 
float l;

printf("Size of a char: %d byte(s)\n", sizeof(s));
printf("Size of an int: %d byte(s)\n", sizeof(h));
printf("Size of a long int: %d byte(s)\n", sizeof(e));
Printf("Size of a long long int: %d byte(s)\n", sizeof(i));
printf("Size of a float: %d byte (S)\n", sizeof(l));
				   
return (0);
}	
