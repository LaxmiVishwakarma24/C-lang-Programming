#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a positive number up to which you want the series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);
    nextTerm = t1 + t2;

    // Loop to generate the next numbers until it exceeds N
    while (nextTerm <= n) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");

    return 0;
}