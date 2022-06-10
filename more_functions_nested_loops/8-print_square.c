#include "main.h"
/**
 * print_square - check the code
 * @size: print #
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			_putchar(35);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
