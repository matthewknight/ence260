#include <stdio.h>

int main(void)
{
    int userInput = 0;
    scanf("%d", &userInput);
    for (int i = 1; i <= userInput; i++) {
        printf("%d\n", (i * i));
    }
}
