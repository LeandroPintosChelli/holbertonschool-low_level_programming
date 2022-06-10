#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check the code.
 * @c: is a digit
 * Return: Always 0.
 */
int _isdigit(int c)
{
char i;
int digit = 0;

	for (i = '0'; i <= '9'; i++)
	{
	if (i == c)
	digit = 1;
	}
	{
		return (digit);
	}
}
