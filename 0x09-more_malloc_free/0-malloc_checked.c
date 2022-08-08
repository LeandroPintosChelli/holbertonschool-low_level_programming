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

	a = (char *)malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
