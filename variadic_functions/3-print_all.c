#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *
 * Description: This function prints values based on the given format.
 *              It supports characters ('c'), integers ('i'), floats ('f'),
 *              and strings ('s'). If a string is NULL, it prints "(nil)".
 *              Different types are separated by commas, and a newline is
 *              printed at the end.
 *
 * @format: The format string specifying the types of arguments.
 *          Example: "cifs"
 *
 * ...: Variable number of arguments based on the format.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char *separator = "";

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                separator = ", ";
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                separator = ", ";
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                separator = ", ";
                break;
            case 's':
                str = va_arg(args, char *);
                printf("%s%s", separator, (str == NULL) ? "(nil)" : str);
                separator = ", ";
                break;
            default:
                break;
        }

        i++;
    }

    printf("\n");

    va_end(args);
}

