#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    float per;
    printf("Enter marks of 5 subjects (out of 100 each):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Percentage = %.2f%%\n", per);
    if (per >= 60)
        printf("First Division\n");
    else if (per >= 45)
        printf("Second Division\n");
    else if (per >= 33)
        printf("Third Division\n");
    else
        printf("Fail\n");
    return 0;
}
