#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* str_concat - chek code
* @s1: a
* @s2: b
* Always Return 0
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *c;
	char a = strlen(s1);
	char b = strlen(s2);

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	c = (char *)malloc(a + b + 1);

	for (i = 0; s1[i]; i++)
	{
		c[i] = s1[i] + s2[i];
	}
	for (j = 0; s2[j]; j++)
	{
		c[a + b] = s2[j];
		c[a + b] = '\0';
	}
	return (c);
}
