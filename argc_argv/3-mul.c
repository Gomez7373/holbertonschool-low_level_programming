#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) or 1 for an Error
 */

int main(int argc, char *argv[])
{
        int num1, num2, result;
        char *endptr;

        if (argc != 3)
        {
                printf("Error\n");

                return (1);
        }
        num1 = strtol(argv[1], &endptr, 10);

        if (*endptr != '\0')
        {
                printf("Error: Invalid input. Please provide two valid integers.\n");

                return (1);
        }
        num2 = strtol(argv[2], &endptr, 10);

        if (*endptr != '\0')
        {
                printf("Error: Invalid input. Please provide two valid integers.\n");

                return (1);
        }
        result = num1 * num2;

        printf("%d\n", result);

        return (0);
}

