#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check the code.
 * @c: lowercase, uppercase
 * Return: Always 0.
 */
int _isalpha(int c)
{
	char l, u;
	int Letter = 0;

	for (l = 'a'; l <= 'z'; l++)
{
	for (u = 'A'; u <= 'Z'; u++)
{
	if (c == l || c == u)
	Letter = 1;
}
}
	return (Letter);
}
