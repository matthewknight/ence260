#include <stdio.h>
<<<<<<< HEAD
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
=======

int isPrime(int n);

int isPrime(int n)
{
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
>>>>>>> 1be16ddd0990248a167baf8c4d01476cd4fd354c
            return 0;
        }
    }
    return 1;
}

<<<<<<< HEAD
=======

>>>>>>> 1be16ddd0990248a167baf8c4d01476cd4fd354c
int main(void)
{
    int n1, n2, currentPos = 0;

<<<<<<< HEAD
    scanf("%d %d", &n1, &n2);

    for (currentPos = n1; currentPos < n2; currentPos++) {
=======
    scanf("%d%d", &n1, &n2);
    for (currentPos = n1; currentPos <= n2; currentPos++) {
>>>>>>> 1be16ddd0990248a167baf8c4d01476cd4fd354c
        if (isPrime(currentPos) == 1) {
            printf("%d\n", currentPos);
        }
    }
}
<<<<<<< HEAD

=======
>>>>>>> 1be16ddd0990248a167baf8c4d01476cd4fd354c
