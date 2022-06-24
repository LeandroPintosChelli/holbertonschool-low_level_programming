#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc - check code
* @nmemb: int
* @size: int
* Return: Always 0
*/
int *array_range(int min, int max)
{
	int i, j;
	int *x;

	if (min > max)
		return (NULL);

	j = (max - min) + 1;
	x = malloc(sizeof(int) * j);

	if (x ==NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		x[i] = min + i;
	}
	return (x);
}
