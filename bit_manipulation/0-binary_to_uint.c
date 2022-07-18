#include "main.h"
/**
* binary_to_uint - change base
* @b: char
* Return: val
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i]- '0';
		i++;
	}
	return (val);
}
