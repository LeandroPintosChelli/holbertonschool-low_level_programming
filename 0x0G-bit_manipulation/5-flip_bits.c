#include "main.h"
/**
* flip_bits - returns the number of bits
* @n: unsigned long int
* @m: unsigned long int
* Return: cont
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;
	unsigned long int i;

	for (i = n ^ m; i != 0; i = i & (i - 1))
		cont++;

	return (cont);
}
