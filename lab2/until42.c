#include <stdio.h>

int main(void) {
    int input = 0;
    
    while (input != 42) {
        scanf("%d", &input);
        printf("%d", input);
    }
}
