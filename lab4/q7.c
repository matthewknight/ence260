#include <stdio.h>

void swap(int* pi, int* pj)
{
    int j = *pi;
    int i = *pj;
    *pi = i;
    *pj = j;
}

int main(void)
{
    int i = 10, j = 20;
    swap(&i, &j);
    printf("%d %d\n", i, j);
}

