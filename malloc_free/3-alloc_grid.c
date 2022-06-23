#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - check code
* @str: duplicate string
* Return: Always 0
*/
int **alloc_grid(int width, int height)
{
	int i = 0;
	char *a = 0;
	char *b = 0;
	char *c = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	a = (char *)malloc(*b + *c + 1);
	for (width = 0; width < i; width++)
	{
		a[width] = b[width];
	}
	for (height = 0; height < i; height++)
	{
		b[height] = c[height];
	}
	return (NULL);
}
