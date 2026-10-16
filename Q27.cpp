#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if (n < 2)
        flag = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);
    return 0;
}
