#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{
    int n;
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    scanf("%d", &n);
    for (; n > 0; n--)
    {
        char pieceChar;
        int x, y;
        scanf("\n%c(%d, %d)", &pieceChar, &x, &y);
        setPieceOnTable(board, pieceChar, x, y);
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[j][i] != 0)
            {
                printf("%c", board[j][i]);
            }
            else
            {
                printf(" ");
            }
            printf("|");
        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[xPos][yPos] = (int)piece;
}