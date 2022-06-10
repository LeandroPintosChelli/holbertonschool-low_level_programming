#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check the code.
 * @c: uppercase
 * Return: Always 0.
 */
int _isupper(int c)
{
	char upper;
	int i = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
			if (upper == c)
			i = 1;
	}
{
			return (i);
}
}
