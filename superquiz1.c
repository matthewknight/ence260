#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int currentStarter, currentStopper, currentNum, decryptedValue = 0;
    bool valueReached, endOfInput = false;
    
    scanf("%d%d", &currentStopper, &currentStarter);
    printf("Stopper: %d, Starter: %d\n", currentStopper, currentStarter);

    while (!endOfInput) {
        while (!valueReached) {
            scanf("%d", &currentNum);
            if (currentNum == currentStopper) {
                valueReached = true;
                break;
            }
            decryptedValue += currentNum;
        }
        printf("%d\n", decryptedValue);
        
    
    
    }
}


