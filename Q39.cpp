#include <stdio.h>
int main() {
    int n, i;
    float fact = 1, sum = 0;
    printf("Enter number of terms:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;          
        sum = sum + i / fact;
    }
    printf("Sum of series = %.4f\n", sum);
    return 0;
}
