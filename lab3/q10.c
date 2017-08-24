#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int counts[26] = {0};
    int currentChar;

    while ((c = getchar()) != EOF) {
        if (isalpha(c) != 0) {
            c = toupper(c);
            currentChar = c - 'A';
            counts[currentChar]++;
        }
    }
    char returnChar = 65;
    for (int loopCounter =  0; loopCounter < 26; loopCounter++) {
        printf("%c: %d\n", returnChar, counts[loopCounter]);
        returnChar++;
    }
}

