#include <stdlib.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return (NULL);
    }

    char *duplicate;
    unsigned int length = 0;

    // Calculate the length of the input string
    while (str[length] != '\0') {
        length++;
    }

    // Allocate memory for the duplicate string
    duplicate = (char *)malloc((length + 1) * sizeof(char));

    if (duplicate == NULL) {
        return (NULL); 
    }

    for (unsigned int i = 0; i <= length; i++) {
        duplicate[i] = str[i];
    }

    return (duplicate);
}

