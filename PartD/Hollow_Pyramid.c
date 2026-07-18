#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        // 1. Print the leading spaces to center the pyramid
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // 2. Print stars or empty spaces inside
        for (j = 1; j <= (2 * i - 1); j++) {
            // Print a star ONLY if it's the start of the row, the end of the row, or the bottom row
            if (j == 1 || j == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" "); // Print an empty space inside the pyramid
            }
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}