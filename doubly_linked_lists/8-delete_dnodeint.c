#include "lists.h"
#include <stdlib.h>
/**
* delete_dnodeint_at_index - borra un nodo en poscision central
* @head: head
* @index: index
* Return: +1, -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *tmp = *head;

	unsigned int idx = 0;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && idx < index - 1)
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
