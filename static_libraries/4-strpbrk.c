#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: i
 * @accept: Write a function that gets the length of a prefix substring.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}

		s++;
	}

	return ('\0');
}
