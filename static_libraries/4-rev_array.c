#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * reverse_array - check the code
 * @a: a
 * @n: Write a function that reverses the content of an array of integers.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
