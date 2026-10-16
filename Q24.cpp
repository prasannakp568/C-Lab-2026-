
#include <stdio.h>
int main() {
    float x, y, p = 1;
    int n, i;
    printf("Enter x and n:\n");
    scanf("%f %d", &x, &n);
    if (n == 1)
        y = 1 + x;
    else if (n == 2)
        y = 1 + x / n;
    else if (n == 3) {
        for (i = 1; i <= n; i++)
            p = p * x;
        y = 1 + p;
    } else
        y = 1 + n * x;
    printf("Y = %.2f\n", y);
    return 0;
}
