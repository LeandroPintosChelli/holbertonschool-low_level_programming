#include "main.h"
/**
 * print_line - check the code
 * @n: print \
 * Return: Always 0.
 */
void print_diagonal(int n);
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		_putchar(92);
	}
	if (n <= 0)
	_putchar('\n');
}
