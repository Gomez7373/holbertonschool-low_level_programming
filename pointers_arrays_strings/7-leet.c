#include "main.h"

char *leet(char *str)
{
    char *ptr = str;
    char leetMap[] = {'4', '3', '0', '7', '1'};
    char *letters = "aeotlAEOTL";
    int i;

    while (*ptr)
    {
        for (i = 0; letters[i]; i++)
        {
            if (*ptr == letters[i])
                *ptr = leetMap[i];
        }
        ptr++;
    }

    return str;
}
