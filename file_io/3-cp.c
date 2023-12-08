#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message and exit.
 * @exit_code: The exit code.
 * @message: The error message format.
 * @file_name: The name of the file.
 * @fd: The file descriptor value.
 */
void print_error(int exit_code, const char *message, const char *file_name, int fd) {
    dprintf(STDERR_FILENO, message, file_name, fd);
    exit(exit_code);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[]) {
    int file_from, file_to, write_size;
    char buffer[BUFFER_SIZE];
    ssize_t read_size;

    for (; argc != 3; dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97));

    for (file_from = open(argv[1], O_RDONLY); file_from == -1; print_error(98, "Error: Can't read from file %s\n", argv[1], file_from));

    for (file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
                        S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH); file_to == -1;
         print_error(99, "Error: Can't write to file %s\n", argv[2], file_to));

    while ((read_size = read(file_from, buffer, BUFFER_SIZE)) > 0)
        for (write_size = write(file_to, buffer, read_size); write_size != read_size;
             print_error(99, "Error: Can't write to file %s\n", argv[2], file_to));

    if (read_size == -1)
        print_error(98, "Error: Can't read from file %s\n", argv[1], file_from);

    if (close(file_from) == -1 || close(file_to) == -1)
        print_error(100, "Error: Can't close fd %d\n", NULL, file_to);

    return 0;
}

