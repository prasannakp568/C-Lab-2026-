#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, num, max = INT_MIN, second = INT_MIN;
    printf("How many numbers?\n");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            second = max;
            max = num;
        } else if (num > second && num != max) {
            second = num;
        }
    }
    printf("Maximum = %d\n", max);
    printf("Second maximum = %d\n", second);
    return 0;
}
