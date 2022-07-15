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
	listint_t *pos, *bef;

	bef = *head;

	pos = malloc(sizeof(listint_t));

	while (head == NULL || pos == NULL)
	{
		return (NULL);
		free(pos);
	}
	pos->n = n;
	pos->next = NULL;

	if (idx == 0)
	{
		pos->next = *head;
		*head = pos;
		return (pos);
	}
	while (bef != NULL && i < idx)
	{
		if (i == idx - 1)

		{
			pos->next = bef->next;
			bef->next = pos;
			return (pos);
		}
		else
			bef = bef->next;
	}
	i++;
	return (NULL);
}
