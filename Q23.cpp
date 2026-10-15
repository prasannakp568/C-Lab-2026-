#include <stdio.h>
int main() {
    int base, exp, i;
    long long result = 1;
    printf("Enter base and exponent:\n");
    scanf("%d %d", &base, &exp);
    for (i = 1; i <= exp; i++)
        result = result * base;
    printf("%d raised to %d = %lld\n", base, exp, result);
    return 0;
}
