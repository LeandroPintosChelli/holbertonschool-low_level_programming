#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _sqrt_recursion - check the code
 * @n: square root
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n + 1));
}
