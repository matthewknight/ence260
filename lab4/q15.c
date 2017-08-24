#include <stdio.h>


int myIndex(int data[], int* element)
{
    int index = (element - data);
    return index;
}

int main(void)
{
    int data[30];
    int* p = &data[42];
    printf("Index is %d\n", myIndex(data, p));
}
