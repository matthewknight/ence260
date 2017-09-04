#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* skipping(const char* s)
{
    char* skippedString = NULL;
    skippedString = malloc(1);
    int j = 0;
    for (int i = 0; i < strlen(s); i += 2) {
        skippedString = realloc(skippedString, j + 2);
        skippedString[j] = s[i];
        j++;
    }
    skippedString[j] = '\0';
    return skippedString;
}

int main(void)    
{
    char* s = skipping("01234567891232fadsdasde");
    printf("%s\n", s);
    free(s);
}
