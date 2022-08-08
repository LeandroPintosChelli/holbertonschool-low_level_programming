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
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);

	a = malloc(sizeof(char) * ((i + n) + 6));

	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		a[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		a[j] = s2[k];
		j++;
	}
	{
		a[j] = '\0';
	}
	return (a);
}
