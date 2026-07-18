#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop handles the rows
    for (i = 1; i <= rows; i++) {
        
        // 1. Inner loop to print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // 2. Inner loop to print the stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}