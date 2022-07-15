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
	while (i < idx)
	{
		if (pos == NULL)
		{
			return (NULL);
		}
		pos->n = n;
		pos->next = 0;
	}
	if (idx == 0)
	{
		pos->next = *head;
		*head = pos;
		return (pos);
	}
	if (!bef)
	{
		return (NULL);
	}
	pos->n = n;
	pos->next = pos;

	if (bef)
	{
		bef->next = pos;
		*head = pos;
	}
	return (NULL);
}
