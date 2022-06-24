#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*
*
*
*/
void *malloc_checked(unsigned int b)
{
	char *a = 0;

	for (b = 0; a[b]; b++)
	{
		a =(char *)malloc(sizeof(char) * b);
	}
	return (a);
	exit(98);
}
