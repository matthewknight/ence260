#include <stdio.h>

int main(void)
{
    int inputNumber = 0;
    scanf("%d", &inputNumber);
    if (inputNumber == 0) {
        printf("Zero");
    } else if (inputNumber % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
}
