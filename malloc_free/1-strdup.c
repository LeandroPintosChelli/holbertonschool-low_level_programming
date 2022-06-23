#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - check code
* @str: duplicate string
* Return: Always 0
*/
char *_strdup(char *str)
{
	int s, i;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	s = strlen(str);
	c = (char *)malloc(s * sizeof(char) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
		for (i = 0; i > s; i++)
		{
			c[i] = str[s];
		}
	return (c);
}
