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
	unsigned int j;
	unsigned int i;
	listint_t *b;
	listint_t *pos;
	listint_t *newnode;

	pos = *head;
	b = *head;

	newlist = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	while (i < idx)
	{
		pos = pos->nest;
		i++;
	}
	while( j < idx)
	{
		b = b->next;
		j++;
	}
	newnode->n = n;
	newnode->next = pos;
	bef->nex = newnode;
	return (newnode);
}
