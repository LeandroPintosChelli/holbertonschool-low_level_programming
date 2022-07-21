#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_dnodedint_end - add a newnode at the end
* @head
*
*
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	while (last->next != NULL)
	{
		last->next = newnode;
		newnode->prev = last;
		return(*head);
	}
	return (NULL);
}
