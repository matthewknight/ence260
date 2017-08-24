#include <stdio.h>

int main(void)
{
    float screeHeight, rushHeight, slideBack, currentHeight = 0;
    int numberOfRuns = 0;

    scanf("%f %f %f", &screeHeight, &rushHeight, &slideBack);

    if (currentHeight >= screeHeight) {
        printf("0");
        return 0;
    }
    while (1) {
        currentHeight += rushHeight;
        numberOfRuns++;
        if (currentHeight >= screeHeight) {
            printf("%d", numberOfRuns);
            return 0;
        }
        currentHeight -= slideBack;
    }
}
