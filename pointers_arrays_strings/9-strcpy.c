#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - check the code
 * @dest: a
 * @src: copies the string pointed
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
        while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
