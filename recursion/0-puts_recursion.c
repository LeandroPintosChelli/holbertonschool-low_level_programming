#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code
 * @s: Write a function that returns a string in reverse.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
}
