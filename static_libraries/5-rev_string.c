#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * @s: Write a function that returns a string in reverse.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (strlen(s) - 1);
	char rev;

	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++, j--;
	}
}
