#include <stdio.h>
int main() {
    int n, i, num, max, min;
    printf("How many numbers?\n");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);
    max = num;
    min = num;
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
