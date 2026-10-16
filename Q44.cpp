
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units consumed:\n");
    scanf("%d", &units);
    if (units <= 200)
        bill = 0.50 * units;
    else if (units <= 400)
        bill = 100 + 0.65 * (units - 200);
    else if (units <= 600)
        bill = 230 + 0.80 * (units - 400);
    else
        bill = 425 + 1.25 * (units - 600);
    printf("Amount to be paid = Rs. %.2f\n", bill);
    return 0;
}
