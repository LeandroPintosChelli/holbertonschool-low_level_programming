#include <stdio.h>
#include "lists.h"
/**
*
*
*
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *ct = h;

	for (; ct; ct = ct->link)
	{
	if (ct->str)
	{
	printf("[%u] %s", ct->lenght, ct->str);
	}
	else
	{
	printf("[0] (nil)");
	}
	count++;
	}
	return (count);
}