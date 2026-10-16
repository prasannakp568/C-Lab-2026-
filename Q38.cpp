#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N:\n");
    scanf("%d", &n);
    for (i = 1; i * i <= n; i++)
        printf("%d ", i * i);
    printf("\n");
    return 0;
}
