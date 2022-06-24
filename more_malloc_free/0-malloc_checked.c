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
	char *a;

	if (a == NULL)
		a = "";
	for (b = 0; a[b]; b++)
	{
		a = (char *)malloc(sizeof(char) * b + 1);
		return (NULL);
	}
	return (a);
	exit(98);
}
