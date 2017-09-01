#include <stdio.h>
#include <stdlib.h>

int* ramp(int n)
{
    int* array = malloc(n * sizeof(int));
    for (int i = 1; i < n + 1; i++) {
        array[i-1] = i;
    }
    return array;
}

int main(void)
{
    int* data = ramp(100);
    for (int i = 0; i < 100; i++) {
        printf("%d ", data[i]);
    }
    free(data);
}
