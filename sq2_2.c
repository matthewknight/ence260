#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Simple ROT13 program. Takes lines of input (80 char max) and applies 
//a 13-shift Caesar enciphering.
//
//17-08-2017 by Matthew Knight


//Returns a proper modulus instead of a negative remainder from '%'.
int modulus(int baseNumber, int modulo)
{
    int mod = baseNumber % modulo;
    if (mod < 0) {
        mod = modulo + mod;
    }
    return mod;
}

//Encrypts/decrypts Caesar cipher encoded text. Takes given char array
//inText and shifts the characters then stores the result in char array
//outText.
void confab(const char* inText, int shift, char* outText)
{
    char currentChar;
    int i = 0;

    while((currentChar = inText[i]) != '\0') {
        if (isupper(currentChar) != 0) {
            //Char is upper-case
            currentChar = abs(modulus(((currentChar - 'A') + shift), 26));
            currentChar = currentChar + 'A';
        } else if (islower(currentChar) != 0) {
            //Char is lower-case
            currentChar = abs(modulus(((currentChar - 'a') + shift), 26));
            currentChar = currentChar + 'a';
        }
        outText[i] = currentChar;
        i++;
    }
    outText[i] = '\0';
}

int main(void)
{
    char lineContents[81];
    char buffer[80] = {'\0'};
    while (fgets(lineContents, 81, stdin) != NULL) {
        confab(lineContents, 13, buffer);
        printf("%s", buffer);
    }
}

