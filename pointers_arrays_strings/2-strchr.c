#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Description: This function returns a pointer to the first occurrence
 * of the character c in the string s, or "nil" if the character is not found.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or "nil" if the character is not found.
 */
char *_strchr(char *s, char c)
{
    char *found = NULL;

    while (*s != '\0') {
        if (*s == c) {
            found = s;
            break;
        }

        s++;
    }

    return (found != NULL) ? found : "nil";
}

int main(void)
{
    char s[] = "Hello, World!";
    char c = 'z';

    char *result = _strchr(s, c);

    printf("%s\n", result);

    return 0;
}

