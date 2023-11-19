#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c') printf("%c", va_arg(args, int));
        if (format[i] == 'i') printf("%d", va_arg(args, int));
        if (format[i] == 'f') printf("%f", va_arg(args, double));
        if (format[i] == 's') printf("%s", (str = va_arg(args, char *)) ? str : "(nil)");
        if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')) printf(", ");
        i++;
    }

    printf("\n");

    va_end(args);
}

