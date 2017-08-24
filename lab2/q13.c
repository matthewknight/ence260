#include <stdio.h>
#include <math.h>
int isPrime(long int);

int isPrime(long int n)
{
    if (n % 2 == 0) {
        return 0;
    }
    long int max = floor(sqrt(n));
    for (long int i = 2; i < max; i++) {
        if (n % ((2 * i) + 1) == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n1, n2, currentPos = 0;

    scanf("%d %d", &n1, &n2);

    for (currentPos = n1; currentPos < n2; currentPos++) {
        if (isPrime(currentPos) == 1) {
            printf("%d\n", currentPos);
        }
    }
}

