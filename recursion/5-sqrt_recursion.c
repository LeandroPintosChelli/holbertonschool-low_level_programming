#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (0);
 
	return (_sqrt_recursion(n + 1));
}
