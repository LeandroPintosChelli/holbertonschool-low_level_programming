#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strcpy - check the code
 * @dest: a
 * @src: copies the string pointed
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int bytes = n;
	int i;

	if (bytes > 0)
	{
		for (i = 0; i < bytes; i++)
		s[i] = b;
	}
	return (s);
}
