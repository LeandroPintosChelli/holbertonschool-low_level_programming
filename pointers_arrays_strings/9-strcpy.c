#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - check the code
 * @dest: a
 * @src: copies the string pointed
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	dest[i] = src[i];
}
