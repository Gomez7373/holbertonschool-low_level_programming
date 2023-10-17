#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - code gives random numbers to the variable n
 *
 */

/*betty style doc for function main goes there */

int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;

	printf("last digit of %d is %d", n, s);

	if (s > 5)
{
	printf("and is greater than 5\n");
}	
	if else (s == 0)
{
	printf("and is 0\n");
}
	else
{
	printf("and is less than 6 and not 0\n");
}
	return (0);
}	
