#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint - add new node
* @head: head
* @n: node
* Return: head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode != NULL)
	{
	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	}
	while (newnode)
	{
		if ((*head) != NULL)
		{
			(*head)->prev = NULL;
			(*head)->prev = newnode;
		}
		(*head) = newnode;
		return (*head);
	}
	return (NULL);
}
