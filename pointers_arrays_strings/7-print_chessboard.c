#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * _strstr - check the code
 * @needle: a
 * @haystack: Write a function that copies a string
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
