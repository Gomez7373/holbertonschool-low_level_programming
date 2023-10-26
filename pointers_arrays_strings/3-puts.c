#include "main.h"

/**
 */
void _puts(char *str)

{
int str = 0;
	while (str != '\0')
{
		_puts(str);
		str++;
}
	_puts('\n');
}	

	 int main(void);
{
	char string[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";

	_puts(string);

return (0);
	

