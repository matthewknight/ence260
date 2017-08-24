#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findTwoLargest(const int data[], int n, int* largest, int* secondLargest);
void printArray(const int data[], int n);
void test_array(const int data[], int n);


void findTwoLargest(const int data[], int n, int* largest, int* secondLargest)
{
    int currentLargest = -2147483648;
    int currentSecondLargest = -2147483648;

    for (int currentIndex = 0; currentIndex < n; currentIndex++) {
        if (data[currentIndex] > currentLargest) {
            currentSecondLargest = currentLargest;
            currentLargest = data[currentIndex];
        } else if (data[currentIndex] > currentSecondLargest) {
            currentSecondLargest = data[currentIndex];
        }
    }

    *largest = currentLargest;
    *secondLargest = currentSecondLargest;
}



void printArray(const int data[], int n)
// Print the first n elements of array data in braces, comma-separated
{
    if (n <= 0) {
        printf("{}");
    } else {
        printf("{%d", data[0]);
        for (int i = 1; i < n; i++) {
            printf(",%d", data[i]);
        }
        printf("}");
    }
}


void test_array(const int data[], int n)
// Test the function findTwoLargest on array 'data' of length 'n.
// It is assumed that n >= 2.

{
    int largest = 0, second = 0;

    findTwoLargest(data, n, &largest, &second);
    printf("The two largest elements from ");
    printArray(data, n);
    printf(" are %d and %d\n", largest, second);
}


int main(void)
{
    int data[] = {5, 4};
    int result1 = 0, result2 = 0;
    findTwoLargest(data, 2, &result1, &result2);
    printf("%d %d\n", result1, result2);
    printf("%d %d\n", data[0], data[1]);
}
