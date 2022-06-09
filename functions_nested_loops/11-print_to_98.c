#include "main.h"
/**
 * print_to_98 - check the code
 * @n: prints all natural numbers from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			_putchar(n);
		}
		if (n == 98)
		{
			_putchar(',');
		}
		_putchar('\n');
	}
	else
	{
		for (n = 0; n >= 98; n--)
		{
			_putchar(n);
		}
		if (n == 98)
		{
			_putchar(',');
		}
		_putchar('\n');
	}
}
