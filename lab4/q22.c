#include <stdio.h>
#include <string.h>

char* mystrrchr(char* s, int c)
{
    int i = 0;
    int currentChar;
    char* lastChar = NULL;

    while ((currentChar = s[i]) != '\0') {
        if (currentChar == c) {
            lastChar = &s[i];
        }
        i++;
    }
    return lastChar;
}

int main(void)
{
    char* s = "ENCE260";
    char* foundAt = mystrrchr(s, 'E');
    if (foundAt == NULL) {
        puts("Not found");
    } else {
        printf("%zu\n", foundAt - s);
    }

}


