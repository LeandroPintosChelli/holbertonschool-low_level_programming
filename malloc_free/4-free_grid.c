#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* alloc_grid - check code
* @width: string
* @height: s
* Return: Always 0
*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
