#include <stdlib.h>

/**

 */

char *_strdup(char *str) {
    // Return NULL if str is NULL
    if (str == NULL) {
        return NULL;
    }

    // Allocate memory for the new string
    char *new_str = malloc(strlen(str) + 1);
    if (new_str == NULL) {
        return NULL; // Allocation failed
    }

    // Copy the contents of the input string to the new string
    strcpy(new_str, str);

    // Return a pointer to the new string
    return new_str;
}

