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

	for (; ct; ct = ct->next)
	{
	if (ct->n)
	{
	printf("%d", ct->n);
	}
	count++;
	putchar('\n');
	}
	return (count);
}
