#include <stdio.h>

int tokenCopy(char* dest, const char* src, int destSize)
{
    char currentChar;
    int copiedChars = 0;
    int i = 0;
    for (; i < destSize-1; i++) {
        currentChar = src[i];
        
        if (currentChar == '\0') {
            dest[i] = currentChar;
            break;
        } else if (currentChar == ' ') {
            break;
        }
        dest[i] = currentChar;
        copiedChars++;
    }
    dest[i] = '\0';

    return copiedChars;
}

int main(void)
{
char buff[10];
int n = tokenCopy(buff, " ", 10);
printf("%d '%s'\n", n, buff);
}
