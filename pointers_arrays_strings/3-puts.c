#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - check the code
 * @str: Write a function that returns the length of a string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		str++;
		_putchar('\n');
	}
	return (0);
}
