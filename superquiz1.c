#include <stdio.h>
<<<<<<< HEAD

//-1 19 14 -3 -1 -18 9 -13 12 -18 19 -2 1 14 -8 -18 

int main(void)
{
    int currentStarter;
    int currentStopper;
    int currentNum;
    int decryptedNum = 0;

    scanf("%d%d", &currentStopper, &currentStarter);


    while (1) {
        scanf("%d", &currentNum);
        while (currentNum != currentStopper) {
            printf("%d - interior num\n", currentNum);
            decryptedNum += currentNum;
            scanf("%d", &currentNum);
        }
        
        printf("%d ANSWER\n", decryptedNum);
        decryptedNum = 0;
        currentStopper = currentStarter;
        

        printf("XX %d\n", currentNum);

        
        int i = scanf("%d", &currentStarter);
        printf("Correct matches: %d\n", i);

        printf("XXX\n");



        printf("*%d\n", currentStarter);

        //scanf("%d", &currentNum);
        //printf("*%d\n", currentNum);

        }
    }
=======
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


>>>>>>> 1be16ddd0990248a167baf8c4d01476cd4fd354c
