#include "lists.h"
/**
* print_dlistint - print content of a list
* @h: number
* Return: count
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
