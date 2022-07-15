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
	unsigned int i;
	listint_t *pos, *bef;

	bef = *head;

	pos = malloc(sizeof(listint_t));

	while (head == NULL)
	{
		return (NULL);
	}
	pos->n = n;
	pos->next = NULL;

	if (idx == 0)
	{
		pos->next = *head;
		*head = pos;
		return (pos);
	}

	for (i = 0; bef != NULL && i <= idx; i++)
	{
		if (i <= idx)
		{
			pos->next = bef->next;
			bef->next = pos;
			return (pos);
		}
	}
	return (NULL);
}
