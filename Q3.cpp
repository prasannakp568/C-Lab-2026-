#include <stdio.h>
int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary:\n");
    scanf("%f", &basic);
    da  = 0.40 * basic;   
    hra = 0.20 * basic;   
    gross = basic + da + hra;
    printf("DA = %.2f\nHRA = %.2f\n", da, hra);
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
