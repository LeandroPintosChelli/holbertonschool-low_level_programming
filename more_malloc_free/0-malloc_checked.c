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
	char *a = 0;

	if (a == NULL)
		a = "";
	if (b == 0)
		return (NULL);
	for (b = 0; a[b]; b++)
	{
		a = (char *)malloc(sizeof(char) * b);
		return (NULL);
		exit(98);
	}
	return (a);
}
