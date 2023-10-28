#include "main.h"

char *leet(char *str)
{
    char *ptr = str;
    char *letters = "aeotlAEOTL";
    int i;

    while (*ptr)
    {
        for (i = 0; letters[i]; i++)
        {
            if (*ptr == letters[i])
            {
                switch (*ptr)
                {
                case 'a':
                case 'A':
                    *ptr = '4';
                    break;
                case 'e':
                case 'E':
                    *ptr = '3';
                    break;
                case 'o':
                case 'O':
                    *ptr = '0';
                    break;
                case 't':
                case 'T':
                    *ptr = '7';
                    break;
                case 'l':
                case 'L':
                    *ptr = '1';
                    break;
                }
            }
        }
        ptr++;
    }

    return str;
}

