#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check for alphabets (both lowercase and uppercase)
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("'%c' is an ALPHABET.\n", ch);
    }
    // Check for digits
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    }
    // If it's neither an alphabet nor a digit, it's a special character
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}