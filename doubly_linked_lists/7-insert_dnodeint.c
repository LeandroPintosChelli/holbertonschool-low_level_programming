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
	dlistint_t *newnode, *bef = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		bef = bef->next;
		if (bef == NULL)
		return (NULL);
	}

	if (bef->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = bef;
	newnode->next = bef->next;
	bef->next->prev = newnode;
	bef->next = newnode;

	return (newnode);
}
