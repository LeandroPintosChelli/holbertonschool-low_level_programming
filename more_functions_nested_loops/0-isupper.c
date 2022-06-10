#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the code.
 * @c: uppercase
 * Return: Always 0.
 */
int _isupper(int c)
{
	char upper;
	int upper = 0;

	for (; upper <= 'z'; upper++)
	{
			if (c == upper)
			{
					upper = 1;
			}
	}
			return (upper);

}
