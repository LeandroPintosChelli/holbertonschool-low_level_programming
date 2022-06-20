#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - check the code
 * @x: returns the value of x
 * @y: raised the power of y
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
