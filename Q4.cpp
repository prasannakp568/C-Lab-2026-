#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Centigrade = %.2f\n", c);
    return 0;
}
