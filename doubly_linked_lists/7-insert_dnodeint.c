#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - insert a new node in a given position
* @head: head
* @idx: unsigned int
* @n: int
* Return: *head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p, *bef;

	bef = *head;

	p = malloc(sizeof(dlistint_t));

	while (head == NULL || p == NULL)
	{
		return (NULL);
		free(p);
	}
	p->n = n;
	p->next = 0;

	if (idx == 0)
	{
		p->next = *head;
		*head = p;
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
