#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%lld", t1);
        
        // Print commas between numbers, but not after the last one
        if (i < n) {
            printf(", ");
        }

        // Calculate the next term and update our variables
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}