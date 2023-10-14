#include <stdio.h>
/**
 * main prints mult. type of size on pc 
 * 
 * Description: 'The program will print milt. sizes'
 *
 *Return: Always 0 (Success)
 */
int main (void)
{
	char s;
	int h;
	long int e; 
        long long int i; 
        float l;	

        printf("Size of a char: %d byte(s)", sizeof(s))
	     printf("Size of an int: %d byte(s)", sizeof(h))
		  printf("Size of a long int: %d byte(s) ", sizeof(e))
		       Printf("Size of a long long int: %d byte(s)", sizeof(i))
		           printf("Size of a float: %d byte (S)", sizeof(l))
				   
	return (0);
}	
