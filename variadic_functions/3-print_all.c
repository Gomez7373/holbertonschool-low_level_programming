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
unsigned int i = 0;
char *str;

va_start(args, format);

while (format && format[i])
{
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') &&
(format[i] == 'c' ? printf("%c", va_arg(args, int)), 1 :
format[i] == 'i' ? printf("%d", va_arg(args, int)), 1 :
format[i] == 'f' ? printf("%f", va_arg(args, double)), 1 :
format[i] == 's' ? (str = va_arg(args, char *)) ? printf("%s", str) : printf("(nil)"), 1 : 0) &&
format[i + 1] != '\0')
{
printf(", ");
}

i++;
}

printf("\n");

va_end(args);
}

