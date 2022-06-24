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
int **alloc_grid(int width, int height)
{
	int a = 1;
	int b = 1;
	int **array;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
/**			for (a = a - 1; a >= 0; a--)
			{
				free(array[a]);
			}*/
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
