#include "main.h"

void print_error(int code, const char *format, int arg)
{
    dprintf(2, format, code, arg);
    exit(code);
}

