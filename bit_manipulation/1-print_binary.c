#include "main.h"
/**
*
*
*
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar(n);
		_putchar('1');
	}
}

/**
*
*
*
*/
int _2print(void)
{
	print_binary(131);
	_putchar('\0');
	print_binary(3);
	return (0);
}
