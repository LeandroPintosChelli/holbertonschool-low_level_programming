#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* pop_listint - agrega nodo al final
* @head: head
* Return: *head
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t prev, *tmp = *head;

	unsigned int idx = 0;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && idx < index -1)
	{
		tmp = tmp->next;
		idx++;
	}
	if (!tmp || !(tmp->next))
	{
		return (-1);
	}
	prev = tmp->next;
	tmp->next = prev->next;

	free(prev);
	return (+1);
}
