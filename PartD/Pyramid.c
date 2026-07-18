#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask the user for the height of the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop handles the rows
    for (i = 1; i <= rows; ++i) {
        
        // Inner loop handles printing the stars in each row
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}