#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Used to handle larger results

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Error handling for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}