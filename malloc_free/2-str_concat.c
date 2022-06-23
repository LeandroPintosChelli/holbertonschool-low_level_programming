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
	int i, j, k = 0 ;
	char *c;

	i = strlen(s1);
	j = strlen(s2);
	k = *s1 + *s2;
	c = (char *)malloc(k * sizeof(char) + 1);

	if (k == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		c[i] = s1[i] + s2[i];
	}
	for (j = 0; j < k; j++)
	{
		c[j] = s1[j] + s2[j];
	}
	return (c);
}
