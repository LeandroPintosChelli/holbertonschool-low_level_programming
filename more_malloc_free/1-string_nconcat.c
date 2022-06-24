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
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	b = strlen(s2);
	a = (char *)malloc(sizeof(char) * ((b + n) + 1));
	if (a == NULL)
		return (NULL);
	if (n <= b)
		return (s2);
	for (n = 0; s2[b]; n++)
	{
		a[n] = s2[b];
	}
	return (s2);
}
