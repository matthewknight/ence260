#include <stdio.h>
#include <ctype.h>
void convertStringToUpper(char name[])
{
    int i = 0;
    while (name[i] != '\0') {
        if (isalpha(name[i]) != 0) {
            name[i] = toupper(name[i]);
        }
        i++;
    }
}

int main(void)
{
    char testString[] = "aB0X?";
    convertStringToUpper(testString);
    printf("%s\n", testString);
}
