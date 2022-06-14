#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - check the code 
 * @n: takes a pointer to an int as parameter and updates
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int a=98;
	
	n=&a;
	_putchar("%d", &n);
	_putchar("%x", &n);
	_putchar("\n");
	return (0);
}

