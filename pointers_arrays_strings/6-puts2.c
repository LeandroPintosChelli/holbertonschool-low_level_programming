#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: a function that prints every other character of a string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)

		str++;
	_putchar('\n');
}
