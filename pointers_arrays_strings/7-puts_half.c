#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: a function that prints half of a character of a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	if (i % 2 != 0)
		j = (i / 2) + 1;
	else
		j = (i / 2);

	while (i < j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
