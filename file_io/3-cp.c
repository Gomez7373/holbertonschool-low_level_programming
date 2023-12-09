#include "main.h"

/**
 * print_error - prints error message to STDERR
 * @code: error code
 * @format: error message format
 * @arg: argument for format
 */
void print_error(int code, const char *format, const char *arg) {
    dprintf(STDERR_FILENO, format, arg);
    dprintf(STDERR_FILENO, "\n");
    exit(code);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[]) {
    int file_from, file_to, num1 = 1024, num2 = 0;
    char buffer[1024];

    if (argc != 3)
        print_error(97, "Usage: cp file_from file_to", NULL);

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
        print_error(98, "Can't read from file %s", argv[1]);

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to == -1)
        print_error(99, "Can't write to %s", argv[2]);

    while (num1 == 1024) {
        num1 = read(file_from, buffer, 1024);
        if (num1 == -1)
            print_error(98, "Can't read from file %s", argv[1]);

        num2 = write(file_to, buffer, num1);
        if (num2 < num1)
            print_error(99, "Can't write to %s", argv[2]);
    }

    if (close(file_from) == -1)
        print_error(100, "Can't close fd %d", NULL);

    if (close(file_to) == -1)
        print_error(100, "Can't close fd %d", NULL);

    return (0);
}

