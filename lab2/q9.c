#include <stdio.h>

int main(void)
{
    int userInput = 0;
    do {
        scanf("%d", &userInput);
        printf("%i\n", userInput);
    } while (userInput != 42);
}

