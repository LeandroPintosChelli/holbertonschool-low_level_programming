#include "main.h"
#include <stdio.h>
/**
 * factorial - check the code
 * @n: prints a string in reverse.
 * Return: Always 0.
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (prime (a, b + 1));
}
/**
*
*
*
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (prime(n, i));
}
