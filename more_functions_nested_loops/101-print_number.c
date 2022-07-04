#include "main.h"
/**
*
*
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
		num ((num / 10) > 0)

	if (num != 0)
		print_number(num);

	_putchar((num % 10) + '\0');
}
