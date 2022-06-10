#include "main.h"
/**
 * print_triangle - print a triangle, followed by a new line
 * @size: character print
 */
void print_triangle(int size)
{
	int i, j, k;

if (size <= 0)
_putchar(10);
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
