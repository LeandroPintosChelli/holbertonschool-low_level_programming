#include "main.h"
/**
 * print_last_digit - check the code.
 * @r: prints the last digit of a number.
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int l = r % 10;

	if (r < 0)
	{
		l = (-l);
	}
	_putchar(l + '0');
	return (l);
}
