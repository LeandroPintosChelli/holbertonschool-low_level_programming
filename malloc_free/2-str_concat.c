#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* str_concat - check code
* @s1: a
* @s2: b
* Return: Always 0
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *c;
	char a = strlen(s1);
	char b = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	c = (char *)malloc(a + b + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		c[i + j] = s2[j];
		c[i + j] = '\0';
	}
	return (c);
}
