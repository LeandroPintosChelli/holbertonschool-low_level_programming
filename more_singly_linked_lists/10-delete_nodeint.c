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

	prev = malloc(sizeof(listint_t));

	while (tmp && idx < index -1)
	{
		tmp = tmp->next;
	}
	if (!tmp || !tmp->next)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}
	prev = tmp->next;
	tmp->next = prev->next;
	free(prev);
	return (+1);
}
