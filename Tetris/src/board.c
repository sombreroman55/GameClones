/* Header for board object
 *
 *
 *
 */

#include "board.h"

Board brd;

void initBoard (void)
{
    int i, j;
    for (i = 0; i < BOARD_HEIGHT; i++)
    {
        for (j = 0; j < BOARD_WIDTH; j++)
        {
            brd.grid[i][j] = 'N';
        }
    }
}

int rowFull (int row)
{
    int j;
    for (j = 0; j < BOARD_WIDTH; j++)
    {
        if (brd.grid[row][j] != 'N')
            return 0;
    }
    return 1;
}

void clearRow (int row)
{
    int j;
    for (j = 0; j < BOARD_WIDTH; j++)
    {
        brd.grid[row][j] = 'N';
    }
}
