#include <stdio.h>
#include <unistd.h>

/* Function prototypes */
void print_digit_combinations(void);

/**
* main - Entry point of the program.
*
* Return: Always 0 (success).
*/
int main(void)
{
/* Call the function to print digit combinations */
print_digit_combinations();
return (0);
}

/**
* print_digit_combinations - Prints all possible combinations of three digits.
*
* Description:
* The function uses three nested loops to iterate through all possible
* combinations of three digits. It ensures that the digits are different and
* avoids redundant combinations by printing only the smallest one. The putchar
* function is used to output the digits and separators.
*/
void print_digit_combinations(void)
{
int i, j, k;

for (i = 0; i <= 7; ++i)
{
for (j = i + 1; j <= 8; ++j)
{
for (k = j + 1; k <= 9; ++k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');

if (!(i == 7 && j == 8 && k == 9))
{
putchar(',');
putchar(' ');
}
}
}
}

    putchar('\n');
}

