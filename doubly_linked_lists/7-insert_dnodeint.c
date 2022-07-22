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
	dlistint_t *new, *bef;

	bef = *head;

	new = malloc(sizeof(listint_t));

	while (head == NULL || p == NULL)
	{
		return (NULL);
		free(new);
	}
	new->n = n;
	new->next = 0;

	if (idx == 0)
	{
		new->next = *head;
		*head = p;
		return (p);
	}

	for (; bef != NULL && i < idx; i++)
	{
		if (i == idx - 1)

		{
			new->next = bef->next;
			bef->next = new;
			return (new);
		}
		else
			bef = bef->next;
	}
	return (NULL);
}
