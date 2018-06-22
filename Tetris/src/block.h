/************************************************
 *                  BLOCK.H                     *
 ************************************************
 * This defines the idea of a block in the system
 *
 *
 *
 *
 *
 */

#ifndef _BLOCK_H_
#define _BLOCK_H_

enum Tetramino { N, I, O, T, J, L, S, Z };
enum Direction { UP, DOWN, LEFT, RIGHT };

typedef struct {
    enum Tetramino type;
    int falling;
    enum Direction dir;
} Block;

#endif /* _BLOCK_H_ */
