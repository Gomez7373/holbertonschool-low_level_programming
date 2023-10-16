#include<stdio.h>
#include<time.h>
#include<stdio.h>
/**
*main - assign random number to n.
*
* return Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d \n", n);
if(n>0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
