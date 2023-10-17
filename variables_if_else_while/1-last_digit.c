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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
{
	printf("las digit %i is %i grater than 5\n", n, n % 10);
}	
	if else (n % 10 == 0)
{
	printf("last digit %i is %i and is 0\n", n, n, % 10);

}
	else
{
	printf("last digit %i is %i and is less than 6 and not 0\n", n, n, % 10);
}
	return (0);
}	
