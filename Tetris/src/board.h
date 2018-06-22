/* Header for board object
 *
 *
 *
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include "globals.h"
#include "block.h"

typedef struct Tile
{
    
} Tile;

typedef struct {
    char grid[BOARD_HEIGHT][BOARD_WIDTH];
} Board;

void initBoard (void);
int rowFull (int);
void clearRow (int);

#endif /* _BOARD_H_ */
