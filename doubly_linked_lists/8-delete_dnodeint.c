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
	dlistint_t *aft;

		if (*head == NULL)
			return (-1);
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
			(*head)->prev = NULL;
			return (1);
		}
		for (; index != 0; index--)
		{
			if (tmp == NULL)
				return (-1);
			tmp = tmp->next;
		}
		if (tmp == *head)
		{
			*head = tmp->next;
			if (*head != NULL)
				(*head)->prev = NULL;
		}
	aft = tmp->next;
	tmp = aft->prev;
	tmp->next = aft->next;
	aft->next->prev = tmp;

	free(aft);
	return (1);
}
