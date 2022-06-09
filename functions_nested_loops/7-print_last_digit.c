#include "main.h"
/**
 * print_last_digit - check the code.
 * @r: prints the last digit of a number.
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int l;

	if (r > 0)
	{
		l = (r);
	}
	else
	{
		l = (-r);
	}
	{
	_putchar('0' + (l % 10));
	return (l % 10);
	}
}
