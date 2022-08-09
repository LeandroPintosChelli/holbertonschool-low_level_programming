#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the code
 * @dest: a
 * @src: Write a function that copies a string
 * @n: a
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
