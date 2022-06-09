#include "main.h"
/**
 * print_last_digit - check the code.
 * @r: prints the last digit of a number.
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int l;

	if (r < 0)
		l = (-r % 10);
	else
		l = (r % 10);

	_putchar((l % 10) + '0');
	_putchar('\n');
	return (0);
}
