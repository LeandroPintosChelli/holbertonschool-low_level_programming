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
	char *c;
	int a = 1;
	int b = 1;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	c = (char *)malloc(sizeof(char) * ((a + b) + 1));
	if (c == NULL)
		return (NULL);
	for (width = 0; width <= a; width++)
	{
		return (NULL);
	}
	for (height = 0; height <= b; height++)
	{
		return (NULL);
	}
	return (NULL);
}
