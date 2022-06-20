#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - check the code
 * @n: square root
 * Return: Always 0.
 */
int h_sqrt(int r, int n)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (h_sqrt(n, r + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (h_sqrt(n, 0));
}
