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
	int i;
	int j = 0;

	while (*(src + j) != '\0')
	{
	j++;
	}

	for (i = 0; i <= j; i++)
	{
	*(dest + i) = *(src + i);
	}
	return (dest);
}
