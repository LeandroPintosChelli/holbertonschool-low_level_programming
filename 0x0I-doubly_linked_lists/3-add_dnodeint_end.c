#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_dnodeint_end - add a newnode at the end
* @head: pointer to head of list
* @n: node data
* Return: newnoded
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
		return (newnode);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	newnode->next = NULL;
	newnode->prev = last;
	last->next = newnode;

	return (newnode);
}
