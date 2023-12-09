#include "main.h"
void print_error(int code, const char *format, int arg)
{
dprintf(STDERR_FILENO, "Error: ");
dprintf(STDERR_FILENO, format, arg);
dprintf(STDERR_FILENO, "\n");
exit(code);
}
int main(int argc, char *argv[])
{
int file_from, file_to, num1, num2;
char buffer[1024];
if (argc != 3)
{
print_error(97, "Usage: cp file_from file_to\n", 0);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
print_error(98, "Can't read from file %s", 0);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
close(file_from);
print_error(99, "Can't write to %s", 0);
}
while ((num1 = read(file_from, buffer, 1024)) > 0)
{
num2 = write(file_to, buffer, num1);
if (num2 < num1)
{
close(file_from);
close(file_to);
print_error(99, "Can't write to %s", 0);
}
}
if (num1 == -1)
{
print_error(98, "Can't read from file %s", 0);
}
close(file_from);
close(file_to);
return (num1 == -1 ? 98 : 0);
}
