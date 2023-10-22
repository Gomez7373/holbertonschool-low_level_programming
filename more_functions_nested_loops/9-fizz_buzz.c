#include <stdio.h>

/**
* fizz_buzz: filter out the 99.5% of programming job candidates
*
* Return: Always 0 (Success)
*/

int main(void)
/**
 * int main(void) - prints the numb from 1-100.
 */
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", num);
}

if (num < 100)
{
printf(" ");
}
}

printf("\n");

return (0);
}
