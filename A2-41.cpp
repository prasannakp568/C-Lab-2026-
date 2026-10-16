#include <stdio.h>
int main() {
    int i, j, space;
    for (i = 1; i <= 4; i++) {
        for (space = 1; space <= 4 - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)          /* going up: 1 to i */
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)      /* coming down: i-1 to 1 */
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
