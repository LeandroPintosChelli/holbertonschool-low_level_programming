#include "lists.h"
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

	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;
	return (*head);
}
