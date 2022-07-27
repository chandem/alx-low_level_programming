#include"main.h"
#include<stdlib.h>
/**
*free_grid -function that free allocated memory.
*@grid: input parameter.
*@height: input parameter.
*/
void free_grid(int **grid, int height)
{
while(height>=0)
{
free(grid[height]);
height--;
}
free(grid);
}
