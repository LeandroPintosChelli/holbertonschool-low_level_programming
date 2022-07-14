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
	listint_t *newnode;

	pos = *head;
	bef = *head;

	newnode = malloc(sizeof(listint_t));
	while (i < idx)
	{
		if (!pos)
		{
			return (NULL);
		}
		bef = pos;
		pos = pos->next;
		i++;
	}
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = pos;

	if (bef)
	{
		bef->next = newnode;
		*head = newnode;
	}
	i++;
	return (newnode);
}
