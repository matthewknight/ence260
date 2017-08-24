#include <stdio.h>
#include <string.h>

size_t mystrlen(const char* s)
{
    int i = 0;
    char currentChar;
    unsigned long int size = 0;
    
    while ((currentChar = s[i]) != '\0') {
        size++;
        i++;
    }
    return size;
    
}

int main(void)
{
    char myString[] = "ENCE260  sdaj sndjkaj dksa \\n asda ";
    
    printf("%zd\n", mystrlen(myString));
    printf("%zd\n", strlen(myString));
    
}

