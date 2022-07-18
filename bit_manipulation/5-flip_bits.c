#include "main.h"
/**
* flip_bits - returns the number of bits
* @n: unsigned long int
* @m: unsigned long int
* Return: cont
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cont = 0;
	int i;

	for (i = n ^ m; i != 0; i = i >> 1)
	{
		cont += i & 1;
	}
	return (cont);
}
