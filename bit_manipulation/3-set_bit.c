#include "main.h"
/**
* clear_bit - returns the value of a bit
* @n: unsigned long int
* @index: unsigned int
* Return: n & 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cont;

	if (index > 64)
		return (-1);

	for (cont = 1; index > 0; index--, cont *= 2)
		;
	*n += cont;
	return (1);
}
