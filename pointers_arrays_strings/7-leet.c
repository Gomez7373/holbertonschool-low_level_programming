#include "main.h"

char *leet(char *str)
{
    char *ptr = str;
    char *letters = "aeotlAEOTL";
    char *leetMap = "430711";
    int i;

    while (*ptr)
    {
        for (i = 0; letters[i]; i++)
        {
            if (*ptr == letters[i] || *ptr == letters[i] + ('a' - 'A'))
            {
                *ptr = leetMap[i];
                break; // Exit the loop once a replacement is made
            }
        }
        ptr++;
    }

    return str;
}
