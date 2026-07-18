#include <stdio.h>

int main() {
    int rows, i, j, space, count;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        
        // 1. Print leading spaces to center the numbers
        for (space = 1; space <= rows - i; space++) {
            printf("  "); // Notice two spaces to match number formatting
        }

        // 2. Print the first half of the row (counting up)
        count = i;
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }

        // 3. Print the second half of the row (counting back down)
        count = count - 2; 
        for (j = 1; j < i; j++) {
            printf("%d ", count);
            count--;
        }

        // Move to the next line after completing a full row
        printf("\n");
    }

    return 0;
}