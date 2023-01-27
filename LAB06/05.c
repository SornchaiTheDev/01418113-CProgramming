#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE], int xPos, int yPos)
{
    for (int i = 1; i < BOARD_SIZE; i++)
    {
        if (xPos + i < BOARD_SIZE && yPos + i < BOARD_SIZE)
        {
            board[xPos + i][yPos + i] = 'X';
        }

        if (xPos + i < BOARD_SIZE && yPos - i >= 0)
        {
            board[xPos + i][yPos - i] = 'X';
        }
        if (xPos - i >= 0 && yPos + i < BOARD_SIZE)
        {
            board[xPos - i][yPos + i] = 'X';
        }
        if (xPos - i >= 0 && yPos - i >= 0)
        {
            board[xPos - i][yPos - i] = 'X';
        }
    }
}
int main()
{
    int xPos, yPos;
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &xPos, &yPos);

    board[xPos][yPos] = 'B';
    bishopMoves(board, xPos, yPos);
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
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
        printf("\n------------------\n");
    }
}