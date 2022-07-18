#include "main.h"
/**
* print_binary - print binary representation
* @n: unsigned long int
*/
void print_binary(unsigned long int n)
{
	unsigned long int result = 0;
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		result = n >> i;

		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
}
