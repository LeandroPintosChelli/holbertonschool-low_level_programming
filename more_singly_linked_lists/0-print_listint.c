#include <stdio.h>
#include "lists.h"
/**
* print_listint - Print lists
* @h: list
* Return: count
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ct = h;

	for (; ct; ct = ct->next)
	{
	if (ct->n)
	{
	printf("[%u] %d", ct->n);
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
