#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* malloc_checked - check code
* @b: int
* Return: Always 0
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *a = 0;

	if (a == NULL)
		return (NULL);
	if (b == 0)
		return (NULL);
	for (b = 0; a[b]; b++)
	{
		a = malloc(sizeof(int) * b);
		return (NULL);
	}
	return (a);
}
