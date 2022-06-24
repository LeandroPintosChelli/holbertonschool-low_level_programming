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

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (width = 0; width <= height; width++)
	{
		array[a] = malloc(height * sizeof(int));
	}
	for (height = 0; height <= b; height++)
	{
		return (NULL);
	}
	return (array);
}
