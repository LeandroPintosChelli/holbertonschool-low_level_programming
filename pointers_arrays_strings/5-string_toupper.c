#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * string_toupper - check the code
 * @s: function that changes all lowercase letters of a string to uppercase.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s >= 'a' && s <= 'z')
	s[i] = s[i] - 'a' + 'A';
	}
}
