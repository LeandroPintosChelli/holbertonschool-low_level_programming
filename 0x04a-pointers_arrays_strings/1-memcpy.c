#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _memcpy - check the code
 * @dest: a
 * @src: copies the string pointed
 * @n: a
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bytes = n;
	int i;

	if (bytes > 0)
	{
		for (i = 0; i < bytes; i++)
		dest[i] = src[i];
	}
	return (dest);
}
