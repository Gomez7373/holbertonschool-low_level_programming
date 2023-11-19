#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *           c: char
 *           i: integer
 *           f: float
 *           s: char * (if the string is NULL, print (nil) instead)
 *           any other char should be ignored
 *
 * Description: This function prints values based on the given format.
 *              It supports characters ('c'), integers ('i'), floats ('f'),
 *              and strings ('s'). If a string is NULL, it prints "(nil)".
 *              Different types are separated by commas, and a newline is
 *              printed at the end.
 *
 * @format: The format string specifying the types of arguments.
 *           Example: "cifs"
 *
 * ...: Variable number of arguments based on the format.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i;
char *str;
int comma_needed = 0;

va_start(args, format);

while (format && format[i])
{
while (format[i] != 'c' && format[i] != 'i' && format[i] != 'f' && format[i] != 's')
i++;

str = NULL;

comma_needed = (format[i] == 'c' && printf("%c", va_arg(args, int))) ||
(format[i] == 'i' && printf("%d", va_arg(args, int))) ||
(format[i] == 'f' && printf("%f", va_arg(args, double))) ||
(format[i] == 's' && (
(str = va_arg(args, char *)),
(str != NULL ? printf("%s", str) : printf("(nil)"))));

i++;
}

if (comma_needed)
printf(", ");

printf("\n");

va_end(args);
}

