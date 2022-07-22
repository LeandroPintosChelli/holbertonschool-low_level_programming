#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - insert a new node in a given position
* @h: head
* @idx: unsigned int
* @n: int
* Return: *head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p, *bef;

	bef = *h;

	p = malloc(sizeof(dlistint_t));

	while (h == NULL || p == NULL)
	{
		return (NULL);
		free(p);
	}
	p->n = n;
	p->prev = p->next;
	p->next = 0;

	if (idx == 0)
	{
		p->next = *h;
		*h = p;
		return (p);
	}

	for (; bef != NULL && i < idx; i++)
	{
		if (i == idx - 1)

		{
			p->next = bef->next;
			bef->next = p;
			return (p);
		}
		else
			bef = bef->next;
	}
	return (NULL);
}
