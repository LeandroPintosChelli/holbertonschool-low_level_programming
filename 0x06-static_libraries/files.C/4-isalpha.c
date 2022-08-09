#include "main.h"

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
