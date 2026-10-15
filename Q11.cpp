#include <stdio.h>
int main() {
    int total, hr, min, sec;
    printf("Enter total seconds:\n");
    scanf("%d", &total);
    hr  = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;
    printf("Time = %d hr : %d min : %d sec\n", hr, min, sec);
    return 0;
}
