#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s [i] != c)
	i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
