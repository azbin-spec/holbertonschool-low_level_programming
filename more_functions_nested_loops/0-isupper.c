#include "main.h"

/* Check if a character is uppercase */
int _isupper(int c) {
    /* Check if the character falls within the ASCII range for uppercase letters */
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

