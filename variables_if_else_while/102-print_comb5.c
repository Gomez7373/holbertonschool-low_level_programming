#include <unistd.h>
#include <stdio.h>
/* Function prototype */
void print_combinations(void);

/**
* main - Entry point of the program.
*
* Return: Always 0 (success).
*/
int main(void)
{
/* Call the function to print combinations */
print_combinations();
return (0);
}

/**
* print_combinations - Prints all possible combinations of two two-digit numbers.
*
* Description:
* The function uses nested loops to iterate through all possible combinations
* of two two-digit numbers. It ensures that the combinations are printed in
* ascending order and follows the specified formatting rules. The putchar
* function is used to output the numbers and separators.
*/
void print_combinations(void)
{
int i, j;

for (i = 0; i <= 99; ++i)
{
for (j = i + 1; j <= 99; ++j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');

putchar((j / 10) + '0');
putchar((j % 10) + '0');

if (!(i == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
}
