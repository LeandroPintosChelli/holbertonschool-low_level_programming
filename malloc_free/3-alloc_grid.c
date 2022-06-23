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
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	for (width = 0; width < height; width++)
	{
		a[width] = b[width];
	}
	for (height = 0; height < i; height++)
	{
		b[height] = c[height];
	}
	return (NULL);
}
