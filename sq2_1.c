#include <stdio.h>
//Simple first occurrence digit finding function
//15-08-2017 by Matthew Knight

const char* findFirstDigit(const char* s)
//Searches an inputted string for the first occurrence of a digit character
//and returns the pointer to that digit char.
{
    const char* firstDigitCharPtr = NULL;
    char currentChar;
    int i = 0;
    while((currentChar = s[i]) != '\0') {
        if ((currentChar >= 48) && (currentChar <= 57)) {
            firstDigitCharPtr = &s[i];
            break;
        }
        i++;
    }
    return firstDigitCharPtr;
}

int main(void)
//Test case
//Desired result: 4
{
    const char* s = "I'm 91 years old";
    printf("%zu\n", sizeof s);
}
