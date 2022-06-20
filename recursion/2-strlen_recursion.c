#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _- check the code
 * @dest: a
 * @src: concatenate the string pointed
 * @n: n
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
