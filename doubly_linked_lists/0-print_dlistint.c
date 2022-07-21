#include "lists.h"
/**
*
*
*
*
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ct = h;

	for (; ct; ct = ct->next)
	{
	if (ct->prev)
	{
	printf("%u", ct->n);
	}
	else
	{
	printf("9");
	}
	count++;
	putchar('\n');
	}
	return (count);
}
