#include "main.h"
/**
 * print_diagonal - check the code
 * @n: print \
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar(' ');
		_putchar('\n');
		_putchar(92);
	}
	if (n <= 0)
	_putchar('\n');
}
