#include <stdio.h>
int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit * digit * digit;   
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
    return 0;
}
