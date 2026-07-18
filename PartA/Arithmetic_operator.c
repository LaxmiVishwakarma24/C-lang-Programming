#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Menu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Sum = %.2f\n", a+b); break;
        case 2: printf("Difference = %.2f\n", a-b); break;
        case 3: printf("Product = %.2f\n", a*b); break;
        case 4: 
            if(b!=0) printf("Quotient = %.2f\n", a/b);
            else printf("Division by zero not allowed\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
