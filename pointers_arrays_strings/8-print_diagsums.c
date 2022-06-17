#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_diagsums - check the code
 * @a: prints the sum of the two diagonals of a square matrix of integers
 * @size: a
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}

	printf("%d, %d\n", j, k);
}
