#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @needle: a
 * @haystack: Write a function that copies a string
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

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
