#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion- check the code
 * @s: function that returns the length of a string
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y -1));
}
