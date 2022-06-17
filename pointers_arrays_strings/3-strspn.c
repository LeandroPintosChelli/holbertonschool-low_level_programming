#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strncpy - check the code
 * @dest: a
 * @src: Write a function that copies a string
 * @n: a
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{ 
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
		else if (accept[i + 1] == '\0')
				return (j);
		}
			s++;
	}

	return (j);
}
