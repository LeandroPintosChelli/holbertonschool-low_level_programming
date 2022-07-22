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
	dlistint_t *tmp = *head;

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
	if (tmp == NULL)
	{
		return (-1);
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (+1);
}
