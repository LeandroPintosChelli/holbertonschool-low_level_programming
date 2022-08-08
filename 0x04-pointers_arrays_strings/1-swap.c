#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 * @a: swaps the values of two integers.
 * @b: swaps the values of two integers.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
