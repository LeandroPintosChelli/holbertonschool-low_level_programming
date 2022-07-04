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
		num = n * -1;
		_putchar('-');
	}

}
