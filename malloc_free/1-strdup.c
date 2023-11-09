#include <stdlib.h>
/**
 *
 *
 *
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length;
	char *duplicate;

if (str == NULL)
{
return (NULL);
}

length = 0;


while (str[length] != '\0')
{
length++;
}


duplicate = (char *)malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
{
return (NULL);
}

for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}

return (duplicate);
}

