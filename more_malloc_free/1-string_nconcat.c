#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - check code
* @s1: a
* @s2: b
* @n: value
* Return: Always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);

	a = (char *)malloc(sizeof(char) * ((i) + 1));

	if (a == NULL)
		return (NULL);
	for (j = 0; j < n; j++)
	{
		a[n] = s1[j];
	}
	for (i = 0; s2[i]; i++)
	{
		a[n + i] = s2[i];
		a[i] = '\0';
	}
	return (a);
}
