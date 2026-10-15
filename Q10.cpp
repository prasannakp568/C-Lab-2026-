#include <stdio.h>
int main() {
    float M, P, C, E, CM;
    printf("Enter Maths, Physics, Chemistry (out of 200) and Entrance (out of 100):\n");
    scanf("%f %f %f %f", &M, &P, &C, &E);
    CM = M / 2 + P / 2 + C / 2 + E;
    printf("Cut off mark = %.2f\n", CM);
    return 0;
}
