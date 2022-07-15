#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* insert_nodeint_at_index - insert a new node in a given position
* @head: head
* @idx: unsigned int
* @n: int
* Return: *head
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p, *bef;

	bef = *head;

	p = malloc(sizeof(listint_t));

	while (head == NULL || pos == NULL)
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
