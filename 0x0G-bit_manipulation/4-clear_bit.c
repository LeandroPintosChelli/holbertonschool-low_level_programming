#include "main.h"
/**
* clear_bit - returns the value of a bit
* @n: unsigned long int
* @index: unsigned int
* Return: n & 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cont;
	unsigned int i = index;

	if (index > 64)
		return (-1);

	for (cont = 1; i > 0; i--, cont *= 2)
		;
	if ((*n >> index) & 1)
	{
		*n -= cont;
	}
	return (1);
}
