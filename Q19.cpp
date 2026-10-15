#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("It is a small case letter\n")
                             : printf("It is NOT a small case letter\n");
    return 0;
}
