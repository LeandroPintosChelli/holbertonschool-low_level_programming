#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*
*
*
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *c;

	i = strlen(s1);
	j = strlen(s2);
	k = *s1 + *s2;

	c = (char *)malloc(j * sizeof(char) + 1);

	if (c == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		c[i] = s1[i] + s2[i];
	}
	for (j = 0; j < k; j++)
	{
		return (s1);
	}
	return (c);
}
