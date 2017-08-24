#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    while ((c = getchar()) != EOF) {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
            if (isupper(c)) {
                printf("'%c': Letter %d\n", c, (c - 'A' + 1));
            } else {
                printf("'%c': Letter %d\n", c, (c - 'a' + 1));
            }
        } else if (c >= 48 && c <= 57) {
            printf("'%c': Digit %c\n", c, c);
        } else if (c == 10) {
            printf("'\\n'\n");
        } else {
            printf("'%c': Non-alphanumeric\n", c);
        }
    }
}
