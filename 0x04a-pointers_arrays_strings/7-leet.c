#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * leet - check the code
 * @s: Write a function that encodes a string into 1337.
 * Return: Always 0.
 */
char *leet(char *s)
{
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
		if (s[j] == a[i])
		s[j] = b[i];
		}
	}
	return (s);
}
