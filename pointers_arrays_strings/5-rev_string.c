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
	int i, len, temp;

	len = strlen(s);

	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		revstr(s);
	}
}
/**	int i, j, k;

	j = strj(s);

	for (i = 0; i < j / 2; i++)
	{
		k = *s;
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
	int i = 0;

	while (*s != '\0')
	{
		s--;
		i--;
	}
	if (i >= 0)
	{
		s--;
		i--;
	}
	if (*s != '\0')
	{
		_putchar(*s);
	}*/
