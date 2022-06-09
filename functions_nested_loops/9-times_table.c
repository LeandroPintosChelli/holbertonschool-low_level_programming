#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int j, i, n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= n; j++)
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
