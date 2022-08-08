#include "main.h"
/**
* get_bit - returns the value of a bit
* @n: unsigned long int
* @index: unsigned int
* Return: n & 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cont;

	if (index > 64)
		return (-1);

	cont = n >> index;
	return (cont & 1);
}
