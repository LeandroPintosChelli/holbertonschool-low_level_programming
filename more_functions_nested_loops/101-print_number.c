#include "main.h"
void _numbers(unsigned int n);
/**
* print_number - check code
* @n: print number
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_numbers(-(unsigned int) n);
	}
	else
	{
		_numbers(n);
	}
}
/**
* _numbers - print numbers
* @n: enteros
*/
void _numbers(unsigned int n)
{
	if (n / 10 != 0)
	{
		_numbers(n / 10);
	}
	_putchar((n % 10) + '0');
}
