#include <stdio.h>

int _isupper(int c) {
    // Check if the character falls within the ASCII range for uppercase letters
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }
    return 0;
}

int main() {
    char ch = 'G';
    if (_isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    } else {
        printf("%c is not uppercase.\n", ch);
    }
    return 0;
}
