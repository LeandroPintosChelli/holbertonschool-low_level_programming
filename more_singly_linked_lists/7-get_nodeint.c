#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* get_nodeint_at_index - agrega nodo al index
* @head: head
* @index: int
* Return: *head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	while (count > index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
