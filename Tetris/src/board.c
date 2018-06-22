/* Header for board object
 *
 *
 *
 */

#include "board.h"

void initBoard (void)
{
    int i, j;
    for (i = 0; i < HEIGHT; i++)
    {
        for (j = 0; j < WIDTH; j++)
        {
            grid[i][j] = 'N';
        }
    }
}

int rowFull (int row)
{
    int j;
    for (j = 0; j < WIDTH; j++)
    {
        if (grid[row][j] != 'N')
            return 0;
    }
    return 1;
}

void clearRow (int row)
{
    int j;
    for (j = 0; j < WIDTH; j++)
    {
        grid[row][j] = 'N';
    }
}
