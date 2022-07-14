#include <stdio.h>
#include "lists.h"
/**
* print_listint - Print lists
* @h: list
* Return: count
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ct = h;

	if (h < 0)
	{
		_putchar('-');
	}
	for (; ct; ct = ct->next)
	{
	if (ct->n)
	{
	printf("%u", ct->n);
	}
	else
	{
	printf("[0] (nil)");
	}
	count++;
	putchar('\n');
	}
	return (count);
}
