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

	a = (int *)malloc(sizeof(int) * ((nmemb + size) + 1));

	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[nmemb] = a[size];
		size++;
	}
	return (NULL);
}
