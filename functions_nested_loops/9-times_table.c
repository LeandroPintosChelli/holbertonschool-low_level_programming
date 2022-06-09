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
		n = i * j;
		for (j = 0; j <= 9; j++)
		{
			if (j <= n - 1)
			{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
