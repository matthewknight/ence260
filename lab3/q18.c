#include <stdio.h>

int countMatches(int n, int data[], int searchValue);

int main(void)
{
    int nums[] = {10, 20, 30}; 
    printf("%d\n", countMatches(3, nums, 1));
}

int countMatches(int n, int data[], int searchValue)
{
    int matches = 0;
    for (int i = 0; i <= n; i++) {
        if (data[i] == searchValue) {
            matches++;
        }
    }
    return matches;
}
