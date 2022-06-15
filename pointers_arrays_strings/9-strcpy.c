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
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < src; i != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
