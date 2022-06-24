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
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *x;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	x = (char *)malloc(sizeof(char) * ((nmemb + size) + 1));
	free(0);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[nmemb] = x[size];
		size++;
	}
	return (x);
}
