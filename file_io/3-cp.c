#include "main.h"

void print_error(const char *msg, const char *file) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file);
}

int main(int argc, char *argv[]) {
    int file_from = open(argv[1], O_RDONLY);
    if (argc != 3 || file_from == -1) {
        if (argc != 3)
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        if (file_from == -1)
            print_error("Can't read from file", argv[1]);
        exit(argc != 3 ? 97 : 98);
    }

    int file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to == -1) {
        print_error("Can't write to", argv[2]);
        close(file_from);
        exit(99);
    }

    char buffer[1024];
    ssize_t num1, num2;

    while ((num1 = read(file_from, buffer, 1024)) > 0) {
        num2 = write(file_to, buffer, num1);
        if (num2 < num1) {
            print_error("Can't write to", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }

    if (num1 == -1)
        print_error("Can't read from file", argv[1]);
    
    close(file_from);
    close(file_to);

    return num1 == -1 ? 98 : 0;
}

