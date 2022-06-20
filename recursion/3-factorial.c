#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - check the code
 * @s: prints a string in reverse.
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n > 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (n * factorial(n - 1));
}
