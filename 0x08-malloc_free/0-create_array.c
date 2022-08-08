#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - check the code
* @size: a
* @c: b
* Return: Always 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *i;

	if (size == 0)
	{
		return (NULL);
	}
	i = (char *)malloc(size * sizeof(char));

	if (i == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < size; j++)
		i[j] = c;
	}
	return (i);
}
