#include <stdio.h>

int main() {
    int num, remainder;
    int reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the digits
    while (num != 0) {
        remainder = num % 10;         // Get the last digit
        reverse = reverse * 10 + remainder; // Append it to the reversed number
        num /= 10;                    // Remove the last digit from the original number
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}