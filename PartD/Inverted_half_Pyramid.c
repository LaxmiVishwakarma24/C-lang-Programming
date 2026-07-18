#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop starts at the maximum number of rows and counts down to 1
    for (i = rows; i >= 1; --i) {
        
        // Inner loop prints stars equal to the current row number 'i'
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}