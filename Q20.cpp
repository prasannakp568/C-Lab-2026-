#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("1.Add  2.Subtract  3.Multiply  4.Divide\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);
    switch (choice) {
        case 1: printf("Result = %.2f\n", a + b); break;
        case 2: printf("Result = %.2f\n", a - b); break;
        case 3: printf("Result = %.2f\n", a * b); break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
