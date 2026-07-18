#include <stdio.h>

int main() {
    int side, i, j;

    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    // Outer loop for rows
    for (i = 1; i <= side; i++) {
        
        // Inner loop for columns
        for (j = 1; j <= side; j++) {
            
            // Check if the current position is on any of the four borders
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("* "); // Print star with a space for grid alignment
            } else {
                printf("  "); // Print two spaces to match the star formatting
            }
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}