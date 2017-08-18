#include <stdio.h>

int isPrime(int n);

int isPrime(int n)
{
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int main(void)
{
    int n1, n2, currentPos = 0;

    scanf("%d%d", &n1, &n2);
    for (currentPos = n1; currentPos <= n2; currentPos++) {
        if (isPrime(currentPos) == 1) {
            printf("%d\n", currentPos);
        }
    }
}
