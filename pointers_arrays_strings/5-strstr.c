#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strspn - check the code
 * @accept: a
 * @s: Write a function that copies a string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *y = needle;

		while (*haystack == *j && *j != 0 && *haystack != 0)
		{
			haystack++;
			j++;
		}
		if (*j == 0)
			return (i);
		haystack = ++i;
	}
	return (0);
}
