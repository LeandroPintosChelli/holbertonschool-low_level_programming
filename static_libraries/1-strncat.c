#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strncat - check the code
 * @dest: a
 * @src: concatenate the string pointed
 * @n: n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[i] && i < n ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
© 2022 GitHub, Inc.
