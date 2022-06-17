#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_chessboard - check the code
 * @a: print_diagsums
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
