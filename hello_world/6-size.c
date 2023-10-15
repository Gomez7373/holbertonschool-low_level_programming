#include <stdio.h>
/**
*main - prints mult type of size on pc
*Return: Always 0 (Success)
*/

int main(void)
{
printf("Size of a char: %d  byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
Printf("Size of a long long int: %llu byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
