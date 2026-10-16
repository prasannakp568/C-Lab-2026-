#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter numbers (enter a negative number to stop):\n");
    scanf("%d", &num);
    while (num >= 0) {
        sum = sum + num;
        scanf("%d", &num);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
