#include <stdio.h>

//Lovingly crafted by Matthew Knight 2017

int main(void)
{
    int currentStarter;
    int currentStopper;
    int currentNum;
    int decryptedNum = 0;

    scanf("%d%d", &currentStopper, &currentStarter);
    scanf("%d", &currentNum);

    while(1) {
        while (currentNum != currentStopper) {
            decryptedNum += currentNum;
            scanf("%d", &currentNum);
        }
        printf("%d\n", decryptedNum);
        decryptedNum = 0;
        currentStopper = currentStarter;
        if (scanf("%d", &currentStarter) == EOF) {
            return 0;
        }
        scanf("%d", &currentNum);
    }
}
