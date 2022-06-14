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
	char i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i <= 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
