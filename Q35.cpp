#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (n > 9) {          /* repeat until only one digit is left */
        sum = 0;
        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    printf("Single digit answer = %d\n", n);
    return 0;
}
