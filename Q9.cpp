#include <stdio.h>
int main() {
    int hr, min, sec, total;
    printf("Enter hours, minutes, seconds:\n");
    scanf("%d %d %d", &hr, &min, &sec);
    total = hr * 3600 + min * 60 + sec;
    printf("Total seconds = %d\n", total);
    return 0;
}
