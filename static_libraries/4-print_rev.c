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
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		s--;
		i--;
		if (*s != '\0')
		_putchar(*s);
	}
	_putchar('\n');
}
