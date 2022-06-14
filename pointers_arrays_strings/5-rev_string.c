#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * @s: Write a function that returns a string in reverse.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s--;
		i--;
	}
	if (i >= 0)
	{
		s--;
		i--;
	}
	if (*s != '\0')
	{
		_putchar(*s);
	}
}
