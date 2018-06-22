/* Header for board object
 *
 *
 *
 */

#ifndef BOARD_H
#define BOARD_H

#include "block.h"

#define HEIGHT 22
#define WIDTH 10

typedef struct Tile
{
    
} Tile;

typedef struct {
    Block grid[HEIGHT][WIDTH];
} Board;

void initBoard (void);
int rowFull (void);
void clearRow (void);

#endif /* BOARD_H */
