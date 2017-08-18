#include <stdio.h>

int isWonRow(char player, char game[3][3], int rowNum)
{
    int result = 0;
    if (game[rowNum][0] == ' ') {
        return result;
    } else {
        for (int i = 1; i < 3; i++) {
            if (game[rowNum][i] != player) {
                return result;
            }
        }
        result = 1;
        return result;
    }
}

int main(void)
{
    char game[3][3] = {{'X', 'X', 'X'},{' ', ' ', ' '}, {'O', 'O', 'O'}};
    printf("%d\n", isWonRow('O', game, 0));
}
