#include "main.h"

/**
 * main - Entry point for the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t n_read, n_write;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        dprintf(98, "Error: Can't read from file %s\n", fd_from);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
        dprintf(99, "Error: Can't write to %s\n", fd_to);

    while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        n_write = write(fd_to, buffer, n_read);
        if (n_write == -1 || n_write != n_read)
           dprintf(99, "Error: Can't write to %s\n", fd_to);
    }

    if (n_read == -1)
        dprintf(98, "Error: Can't read from file %s\n", fd_from);

    if (close(fd_from) == -1)
        dprintf(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
       dprintf(100, "Error: Can't close fd %d\n", fd_to);

    return 0;
}

