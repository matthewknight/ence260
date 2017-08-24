#include <stdio.h>
#include <stdbool.h>


bool isInData2(char data[], int arraySize, char* ptr)
{
    if ((ptr >= &data[0]) && (ptr <= &data[(arraySize-1)])) {
        return true;
    } else {
        return false;
    }
}

int main(void)
{
    char x;
    char thing[3];
    char y;
    printf("%d\n", isInData2(thing, 3, &x));
    printf("%d\n", isInData2(thing, 3, &thing[0]));
    printf("%d\n", isInData2(thing, 3, &thing[1]));
    printf("%d\n", isInData2(thing, 3, &thing[2]));
    printf("%d\n", isInData2(thing, 3, &thing[3]));
    printf("%d\n", isInData2(thing, 3, &y));
}
