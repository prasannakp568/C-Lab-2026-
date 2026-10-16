#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;          
    }
    if (n == 1)
        printf("1 is neither prime nor composite\n");
    else if (count == 2)
        printf("%d is Prime\n", n);
    else
        printf("%d is Composite\n", n);
    return 0;
}
