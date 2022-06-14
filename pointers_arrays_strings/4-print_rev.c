#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * @s: Write a function that returns the length of a string in reverse.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *i = s;

	while (*(i + 1) != '\0')
		i++;

	while (i > s)
	{
		char j = *i;
		*i-- = *s;
		*s++ = j;
	}
	return (0);
}
