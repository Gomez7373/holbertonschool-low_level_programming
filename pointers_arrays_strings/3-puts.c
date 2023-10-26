#include "main.h"

/**
 */
void _puts(char *str)

{

	while (*str != '\0')
{
		putchat(*str);
		str++;
}
	putchar('\n');
}	

	 int main(void);
{
	char string[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	_puts(string);

return (0);
	

