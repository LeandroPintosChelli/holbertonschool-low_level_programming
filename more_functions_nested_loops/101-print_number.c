#include "main.h"
/**
* print_number - check code
* @n: print number
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)

		print_number(num);

	_putchar((num % 10) + '\0');
}
