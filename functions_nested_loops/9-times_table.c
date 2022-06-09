#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int j, i, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
