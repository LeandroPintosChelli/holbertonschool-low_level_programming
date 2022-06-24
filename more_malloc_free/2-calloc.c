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
	int *a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	exit(0);
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i < nmemb; i++)
	{
		return (0);
	}
	return (NULL);
}
