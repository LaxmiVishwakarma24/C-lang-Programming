#include <stdio.h>

int main() {
    float percentage;

    // 1. Get the percentage from the user
    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    // 2. Validate input and calculate the grade
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    } 
    else if (percentage >= 90) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}