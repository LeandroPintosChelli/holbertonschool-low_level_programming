#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*
*
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
	c = (char *)malloc(sizeof(char) + 1);

	if (c == NULL)
	{
		for (i = 0; i < s; i++)
		{
			return (NULL);
		}
	}
	return (c);
} 
