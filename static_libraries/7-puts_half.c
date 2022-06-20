#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * @str: a function that prints half of a character of a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = strlen(str);

	if (j % 2 != 0)
	{
		i = (j / 2) + 1;
	}
	else
	{
		i = (j / 2);
	}
	while (i < j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
