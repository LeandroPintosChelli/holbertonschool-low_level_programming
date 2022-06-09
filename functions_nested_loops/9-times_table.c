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
		for (j = 1; j <= 10; j++)
		{
			if (j <= 10 - 1)
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
