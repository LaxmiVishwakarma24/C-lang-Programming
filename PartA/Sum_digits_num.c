#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make sure the code works even if the user enters a negative number
    if (num < 0) {
        num = -num; 
    }

    // Keep looping until the number is completely chopped down to 0
    while (num > 0) {
        remainder = num % 10;  // 1. Grab the last digit
        sum = sum + remainder;  // 2. Add it to our total
        num = num / 10;         // 3. Chop the last digit off the number
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}