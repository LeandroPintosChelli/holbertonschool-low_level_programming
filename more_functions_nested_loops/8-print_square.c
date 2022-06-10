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
			for (b = 0; b < a; b++)
			_putchar('\n');
			_putchar(35);
		}
	}
	else
	_putchar('\n');
}
