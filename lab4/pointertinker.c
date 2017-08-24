#include <stdio.h>
void printViaPtr(int* ptr)
{
    printf("%d\n", *ptr);
}


void print2Ints(int i, int j)
{
    int* iPtr = &i;
    int* jPtr = &j;
    printViaPtr(iPtr);
    printViaPtr(jPtr);
}
    

int main(void)
{
    print2Ints(11, -93);
}
