#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows for the half-diamond: ");
    scanf("%d", &n);

    // === TOP HALF ===
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars with a trailing space
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // === BOTTOM HALF ===
    // We start at 'n - 1' so the middle row does not repeat
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars with a trailing space
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}