#include <stdio.h>
#include "lists.h"
/**
* print_list - Print lists
* @h: list
* Return: count
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ct = h;

	for (; ct; ct = ct->next)
	{
	if (ct->str)
	{
	printf("[%u] %s", ct->len, ct->str);
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
