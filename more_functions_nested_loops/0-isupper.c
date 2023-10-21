#include <stdio.h>

int _isupper(int c) {
/**
 * Check if the character is within the ASCII range for uppercase letters
 * ASCII values for uppercase letters: A=65, B=66, ..., Z=90
 * return (c >= 65 && c <= 90)
 */
}

int main() {
   
    char uppercaseChar = 'C';
    char lowercaseChar = 'c';

    if (_isupper(uppercaseChar)) {
        printf("%c is uppercase.\n", uppercaseChar);
    } else {
        printf("%c is not uppercase.\n", uppercaseChar);
    }

    if (_isupper(lowercaseChar)) {
        printf("%c is uppercase.\n", lowercaseChar);
    } else {
        printf("%c is not uppercase.\n", lowercaseChar);
    }

    return 0;
}

