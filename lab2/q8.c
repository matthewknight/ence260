#include <stdio.h>

int main(void)
{
    int userInput = 0;
    while (userInput != 42) {
        scanf("%d", &userInput);
        printf("%i\n", userInput);
    }
}
