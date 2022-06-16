#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 *_strcpy - check the code
 * @dest: a
 * @src: copies the string pointed
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	size_t n = 0;
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
