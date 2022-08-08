#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * h_sqrt - check the code
 * @r: variable
 * @s: variable returns the natural square root of a number
 * Return: Always 0.
 */
int h_sqrt(int r, int s)
{
	if (r * r > s)
		return (-1);
	if (r * r == s)
		return (r);
	return (h_sqrt(r + 1, s));
}
/**
 * _sqrt_recursion - check the code
 * @n: square root
 * Return: Always
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (h_sqrt(i, n));
}
