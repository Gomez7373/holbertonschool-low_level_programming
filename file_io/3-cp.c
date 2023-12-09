#include "main.h"

#define BUFF_SIZE 1024

void error_exit(int code, const char *msg, const char *file_name)
{
dprintf(STDERR_FILENO, msg, file_name);
exit(code);
}

int main(int argc, char *argv[])
{
int file_from, file_to, rd, wr;
char buffer[BUFF_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n", "");

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (file_from == -1 || file_to == -1)
error_exit(98, "Error: Can't read from file %s\n",
file_from == -1 ? argv[1] : argv[2]);

while ((rd = read(file_from, buffer, BUFF_SIZE)) > 0)
if ((wr = write(file_to, buffer, rd)) == -1 || wr != rd)
error_exit(99, "Error: Can't write to %s\n", argv[2]);

if (rd == -1)
error_exit(98, "Error: Can't read from file %s\n", argv[1]);

close(file_from);
close(file_to);

return (0);
}
